/*
Implementation by the Keccak, Keyak and Ketje Teams, namely, Guido Bertoni,
Joan Daemen, Michaël Peeters, Gilles Van Assche and Ronny Van Keer, hereby
denoted as "the implementer".

For more information, feedback or questions, please refer to our websites:
http://keccak.noekeon.org/
http://keyak.noekeon.org/
http://ketje.noekeon.org/

To the extent possible under law, the implementer has waived all copyright
and related or neighboring rights to the source code in this file.
http://creativecommons.org/publicdomain/zero/1.0/
*/

#include "test_crypto_aead.h"

int main()
{
    const unsigned char *key = (const unsigned char *)
        "\x14\x5e\xa8\xf2\x3d\x87\xd1\x1c\x66\xb0\xfa\x45";
    const unsigned char *nonce = (const unsigned char *)
        "\x15\x70\xcb\x27\x82\xdd\x39\x94\xef\x4b";
    const unsigned char *AD = (const unsigned char *)
        "\x0c\x78\xe4\x51\xbd\x2a";
    const unsigned char *plaintext = (const unsigned char *)
        "\x0e\x8b\x09\x86\x04\x81\xfe";
    const unsigned char *ciphertext = (const unsigned char *)
        "\xab\x1b\xb0\x94\xf7\x80\x63\xc8\x90\xfc\x8e\xd2\x55\xb2\x4c\x24\xb3\xac\x7e";
    return test_crypto_aead(key, 12, nonce, 10, AD, 6, plaintext, 7, ciphertext, 12);
}