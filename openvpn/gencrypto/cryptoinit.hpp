#ifndef OPENVPN_GENCRYPTO_CRYPTOINIT_H
#define OPENVPN_GENCRYPTO_CRYPTOINIT_H

#include <openvpn/gencrypto/gencrypto.hpp>

#ifdef OPENVPN_APPLE_CRYPTO

namespace openvpn {
  struct crypto_init {
    crypto_init() {}
  };
}

#else

#include <openvpn/openssl/util/init.hpp>

namespace openvpn {
  typedef openssl_init crypto_init;
}

#endif // OPENVPN_APPLE_CRYPTO

#endif // OPENVPN_GENCRYPTO_CRYPTOINIT_H