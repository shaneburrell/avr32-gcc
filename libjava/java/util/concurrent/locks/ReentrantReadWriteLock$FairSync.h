
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_locks_ReentrantReadWriteLock$FairSync__
#define __java_util_concurrent_locks_ReentrantReadWriteLock$FairSync__

#pragma interface

#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>

class java::util::concurrent::locks::ReentrantReadWriteLock$FairSync : public ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync
{

public: // actually package-private
  ReentrantReadWriteLock$FairSync();
  jboolean writerShouldBlock(::java::lang::Thread *);
  jboolean readerShouldBlock(::java::lang::Thread *);
private:
  static const jlong serialVersionUID = -2274990926593161451LL;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_locks_ReentrantReadWriteLock$FairSync__
