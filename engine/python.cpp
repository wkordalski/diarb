#include <boost/python.hpp>

#include "engine.hpp"

using namespace boost::python;

BOOST_PYTHON_MODULE(diarb)
{
  class_<diarb::engine>("engine")
    .def("version", &diarb::engine::version)
    .def("run", &diarb::engine::run)
    ;
}
