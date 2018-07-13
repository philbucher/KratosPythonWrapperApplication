//    |  /           |
//    ' /   __| _` | __|  _ \   __|
//    . \  |   (   | |   (   |\__ `
//   _|\_\_|  \__,_|\__|\___/ ____/
//                   Multi-Physics 
//
//  License:         BSD License
//                     Kratos default license: kratos/license.txt
//
//  Main authors:    Vicente Mataix Ferrandiz
//


// System includes

#if defined(KRATOS_PYTHON)
// External includes
#include <pybind11/pybind11.h>


// Project includes
#include "includes/define.h"
#include "python_wrapper_application.h"
#include "python_wrapper_application_variables.h"
#include "custom_python/add_custom_utilities_to_python.h"


namespace Kratos {
namespace Python {

  using namespace pybind11;

  PYBIND11_MODULE(KratosPythonWrapperApplication,m)
  {

      class_<KratosPythonWrapperApplication,
              KratosPythonWrapperApplication::Pointer,
              KratosApplication>(m, "KratosPythonWrapperApplication")
              .def(init<>())
            ;

    AddCustomUtilitiesToPython(m);

    //registering variables in python

//    KRATOS_REGISTER_IN_PYTHON_VARIABLE(NODAL_AREA);


  }


} // namespace Python.
} // namespace Kratos.

#endif // KRATOS_PYTHON defined
