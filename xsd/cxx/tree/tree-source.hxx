// file      : xsd/cxx/tree/tree-source.hxx
// author    : Boris Kolpackov <boris@codesynthesis.com>
// copyright : Copyright (c) 2005-2009 Code Synthesis Tools CC
// license   : GNU GPL v2 + exceptions; see accompanying LICENSE file

#ifndef CXX_TREE_TREE_SOURCE_HXX
#define CXX_TREE_TREE_SOURCE_HXX

#include <xsd-frontend/semantic-graph/schema.hxx>

#include <cxx/tree/elements.hxx>

namespace CXX
{
  namespace Tree
  {
    Void
    generate_tree_source (Context&,
                          UnsignedLong first,
                          UnsignedLong last);
  }
}

#endif  // CXX_TREE_TREE_SOURCE_HXX
