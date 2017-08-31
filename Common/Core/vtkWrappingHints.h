/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkWrappingHints.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
/**
 * @class   vtkWrappingHints
 * @brief   hint macros for wrappers
 *
 * The macros defined in this file can be used to supply hints for the
 * wrappers.
*/

#ifndef vtkWrappingHints_h
#define vtkWrappingHints_h

#ifdef __VTK_WRAP__
// The return value points to a newly-created VTK object.
#define VTK_NEWINSTANCE [[vtk::newinstance]]
// The parameter is a pointer to a zerocopy buffer.
#define VTK_ZEROCOPY [[vtk::zerocopy]]
// Set preconditions for a function
#define VTK_EXPECTS(x) [[vtk::expects(x)]]
#else
#define VTK_NEWINSTANCE
#define VTK_ZEROCOPY
#define VTK_EXPECTS(x)
#endif

#endif
// VTK-HeaderTest-Exclude: vtkWrappingHints.h
