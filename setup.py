from distutils.core import setup
from distutils.extension import Extension

setup(
  name = "Diarb",
  ext_modules=
  [
    Extension("diarb",
    ['engine/engine.cpp', 'engine/renderer.cpp', 'engine/python.cpp'],
	  libraries = ['boost_python3', 'sfml-system', 'sfml-window', 'sfml-graphics'],
	  extra_compile_args = ['-std=c++11'])
  ]
)

