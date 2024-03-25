# Hash-Generator
### This project is a hash generator tool that allows users to generate cryptographic hashes using various algorithms. It supports a wide range of hash algorithms for secure hashing of input text.

## Overview
The Hash Generator project provides a command-line tool for generating hashes using OpenSSL library in C++. It allows users to select from a list of supported hash algorithms and input text for hashing.

## Features
* Generate cryptographic hashes using various algorithms.
* Command-line interface for easy interaction.
* Supports a wide range of hash algorithms for secure hashing.

## Installation
Before running the hash generator tool, ensure that OpenSSL library is installed on your system. If not, follow these steps to install it:

1. ### Install OpenSSL:
   - On Debian-based systems (e.g., Ubuntu), use the following command:
   ```bash
   sudo apt-get install libssl-dev
   ```
2. ### Clone the Repository:
   - Clone this GitHub repository to your local machine using the following command:
   ```bash
   git clone https://github.com/naradashen/Hash-Generator.git
   ```
3. ### Compile the Code:
   - Navigate to the cloned repository directory:
   ```bash
   cd Hash-Generator
   ```
   - Compile the code using a C++ compiler (e.g., g++):
   ```cpp
   g++ main.cpp -o hash_generator -lcrypto
   ```

## Usage
To use the hash generator tool, follow these steps:

1. ### Navigate to Project Directory:
   -Open your terminal or command prompt and navigate to the HashGenerator directory:
   ```bash
   cd Hash-Generator
   ```
2. ### Run the Program:
   - Execute the compiled program with the desired hash algorithm and input text:
   ```bash
   ./hash_generator
   ```

## Supported Hash Algorithms
    MD4
    MD5
    SHA-1
    SHA-224
    SHA-256
    SHA-384
    SHA-512
    SHA3-224
    SHA3-256
    SHA3-384
    SHA3-512
    BLAKE2b-512
    BLAKE2s-256
    SHAKE128
    SHAKE256
    SHA-512/224
    SHA-512/256
    SHA512-224
    SHA512-256
    SHA-512
    SHA-384
    SHA-256
    SHA-224
    SHA-1
    SHA-0
    MD5
    RIPEMD160
    MD2
    WHIRLPOOL
    SM3

