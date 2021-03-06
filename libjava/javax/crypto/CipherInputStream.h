
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_CipherInputStream__
#define __javax_crypto_CipherInputStream__

#pragma interface

#include <java/io/FilterInputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace crypto
    {
        class Cipher;
        class CipherInputStream;
    }
  }
}

class javax::crypto::CipherInputStream : public ::java::io::FilterInputStream
{

public:
  CipherInputStream(::java::io::InputStream *, ::javax::crypto::Cipher *);
public: // actually protected
  CipherInputStream(::java::io::InputStream *);
public:
  virtual jint available();
  virtual void close();
  virtual jint read();
  virtual jint read(JArray< jbyte > *, jint, jint);
  virtual jint read(JArray< jbyte > *);
  virtual jlong skip(jlong);
  virtual jboolean markSupported();
  virtual void mark(jint);
  virtual void reset();
private:
  void nextBlock();
  static ::java::util::logging::Logger * logger;
  ::javax::crypto::Cipher * __attribute__((aligned(__alignof__( ::java::io::FilterInputStream)))) cipher;
  JArray< jbyte > * outBuffer;
  jint outOffset;
  jboolean isStream;
  jboolean eof;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_crypto_CipherInputStream__
