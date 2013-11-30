/**
 * The MIT License (MIT)
 * 
 * Copyright (c) 2013 Christian Speckner <cnspeckn@googlemail.com>
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef BINDINGS_UTIL
#define BINDINGS_UTIL

#include <v8.h>
#include <libxl.h>

namespace node_libxl {
namespace util {


v8::Handle<v8::Value> ProxyConstructor(
    v8::Handle<v8::Function> constructor,
    const v8::Arguments& arguments
);


v8::Handle<v8::Value> ThrowLibxlError(const libxl::Book* book);


v8::Handle<v8::Value> ThrowLibxlError(v8::Handle<v8::Value> book);


v8::Handle<v8::Value> StubConstructor(const v8::Arguments& arguments);


v8::Handle<v8::Value> CallStubConstructor(v8::Handle<v8::Function> constructor);


}
}

#endif // BINDINGS_UTIL
