# python3 setup.py build_ext --inplace

from setuptools import setup, Extension
ext_modules = [
    Extension('mymodule', sources = ['mymodule.c']),
]
setup(
    name = 'My AWESOME module',
    ext_modules = ext_modules
)