# cpp_private_method_hack

C++ sample that shows how to call private methods.

Imagine a scenario where you received a 3rd party C++ library (e.g. Geom) and there is a private method that you need to call (e.g. Geom::_area(); ).

This #define hack allows you to nominate your class (e.g. MyGeom) as a friend and allows it to call the private method.
