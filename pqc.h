
#include<oqs/oqs.h>

uint8_t public_key[OQS_KEM_kyber_768_length_public_key];
uint8_t secret_key[OQS_KEM_kyber_768_length_secret_key];
uint8_t ciphertext[OQS_KEM_kyber_768_length_ciphertext];
uint8_t shared_secret_e[OQS_KEM_kyber_768_length_shared_secret];
uint8_t shared_secret_d[OQS_KEM_kyber_768_length_shared_secret];


OQS_STATUS generatePQC();