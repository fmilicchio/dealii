//---------------------------------------------------------------------------
//    $Id$
//    Version: $Name$
//
//    Copyright (C) 1998, 1999, 2000, 2001, 2002, 2003, 2005, 2006, 2007, 2012 by the deal.II authors
//
//    This file is subject to QPL and may not be  distributed
//    without copyright and license information. Please refer
//    to the file deal.II/doc/license.html for the  text  and
//    further information on this license.
//
//---------------------------------------------------------------------------

#include <deal.II/lac/solver.h>
#include <deal.II/lac/vector_memory.h>
#include <deal.II/lac/vector.h>
#include <deal.II/lac/block_vector.h>
#include <deal.II/lac/petsc_vector.h>
#include <deal.II/lac/petsc_block_vector.h>

#include <deal.II/lac/parallel_vector.h>

DEAL_II_NAMESPACE_OPEN


// a few instantiations of static members. Hope that we catch all that
// are required

template class Solver<Vector<double> >;
template class Solver<BlockVector<double> >;
template class Solver<parallel::distributed::Vector<double> >;

template class Solver<Vector<float> >;
template class Solver<BlockVector<float> >;
template class Solver<parallel::distributed::Vector<float> >;

#ifdef DEAL_II_WITH_PETSC
template class Solver<PETScWrappers::Vector>;
template class Solver<PETScWrappers::BlockVector>;
#endif

DEAL_II_NAMESPACE_CLOSE
