#include <iostream>
#include <iomanip>
#include <string>
#include <openssl/evp.h>

using namespace std;

void listSupportedHashAlgorithms() {
    const EVP_MD* md;
    cout << "Supported Hash Algorithms:" << endl;
    cout << "-------------------------" << endl;
    OpenSSL_add_all_digests(); // Add this line to initialize all digest algorithms
    md = EVP_MD_fetch(NULL, "ALL", NULL); // Fetch all digest algorithms
    while (md != NULL) {
        cout << EVP_MD_name(md) << endl;
        md = EVP_MD_fetch(NULL, "ALL", NULL);
    }
    cout << "-------------------------" << endl;
}

void generateHash(const string& input, const string& algorithm) {
    const EVP_MD* md = EVP_get_digestbyname(algorithm.c_str());
    if (!md) {
        cout << "Error: Invalid hash algorithm." << endl;
        return;
    }

    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, input.c_str(), input.length());

    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int hashLen;
    EVP_DigestFinal_ex(mdctx, hash, &hashLen);
    EVP_MD_CTX_free(mdctx);

    cout << "Hash (" << algorithm << "): ";
    for (unsigned int i = 0; i < hashLen; i++) {
        cout << hex << setw(2) << setfill('0') << (int)hash[i];
    }
    cout << endl;
}

int main() {
    OpenSSL_add_all_algorithms();

    string input;
    string algorithm;

    cout << "Select a hash algorithm to generate:" << endl;
    listSupportedHashAlgorithms();
    cout << "Enter the algorithm name: ";
    getline(cin, algorithm);

    cout << "Enter your text: ";
    getline(cin, input);

    generateHash(input, algorithm);

    EVP_cleanup();
    return 0;
}
