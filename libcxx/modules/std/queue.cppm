// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

module;
#include <queue>

export module std:queue;
export namespace std {
  // [queue], class template queue
  using std::queue;

  using std::operator==;
#if 0 // P1614
  using std::operator<=>;
#else
  using std::operator!=;
  using std::operator<;
  using std::operator>;
  using std::operator<=;
  using std::operator>=;
#endif

  using std::swap;
  using std::uses_allocator;

  // [priority.queue], class template priority_queue
  using std::priority_queue;
} // namespace std
