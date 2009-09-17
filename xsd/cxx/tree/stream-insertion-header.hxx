// file      : xsd/cxx/tree/stream-insertion-header.hxx
// author    : Boris Kolpackov <boris@codesynthesis.com>
// copyright : Copyright (c) 2005-2009 Code Synthesis Tools CC
// license   : GNU GPL v2 + exceptions; see accompanying LICENSE file

#ifndef CXX_TREE_STREAM_INSERTION_HEADER_HXX
#define CXX_TREE_STREAM_INSERTION_HEADER_HXX

#include <xsd-frontend/semantic-graph/schema.hxx>

#include <cxx/tree/elements.hxx>

namespace CXX
{
  namespace Tree
  {
    Void
    generate_stream_insertion_header (Context&);
  }
}

#endif  // CXX_TREE_STREAM_INSERTION_HEADER_HXX
