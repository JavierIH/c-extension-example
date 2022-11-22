#include <Python.h>
#include <string.h>


static PyObject* do_something(PyObject *self, PyObject* args){
    int input;
    if (!PyArg_ParseTuple(args, "i", &input)){
        return NULL;
    }
    int output = input*2;
    return Py_BuildValue("i", output);
}

static PyMethodDef moduleMethods[] = {
    {"do_something", do_something, METH_VARARGS, "Do something great"}
};

static struct PyModuleDef myModule = {
    PyModuleDef_HEAD_INIT,
    "mymodule",
    "My AWESOME Module",
    -1,
    moduleMethods
};

PyMODINIT_FUNC PyInit_mymodule(void){
    return PyModule_Create(&myModule);
};