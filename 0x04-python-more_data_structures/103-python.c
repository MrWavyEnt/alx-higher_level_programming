#include <Python.h>

/**
 * print_python_list - Print basic information about a Python list
 * @p: Pointer to the Python list object
 * Description: This function prints the size and allocated memory of
 * a Python list, along with the type of each element in the list.
 */
void print_python_list(PyObject *p)
{
	Py_ssize_t size, i;
	PyObject *item;
	
	printf("[*] Python list info\n");
	printf("[*] Size of the Python List: %ld\n", PyList_Size(p));
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);
	
	size = PyList_Size(p);
	for (i = 0; i < size; i++)
	{
		item = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
	}
}

#include <Python.h>

/**
 * print_python_bytes - Print basic information about a Python bytes object
 * @p: Pointer to the Python bytes object
 * Description: This function prints the size, trying string, and the
 * first 10 bytes (if available) of a Python bytes object.
 */
void print_python_bytes(PyObject *p)
{
	Py_ssize_t size, i;
	char *data;
	
	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p)) 
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}
	
	size = PyBytes_Size(p);
	data = PyBytes_AsString(p);
	
	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", data);
	
	printf("  first %ld bytes: ", (size < 10) ? size : 10);
	
	for (i = 0; i < size && i < 10; i++)
	{
		printf("%02hhx", data[i]);
		if (i + 1 < size && i + 1 < 10)
		{
			printf(" ");
		}
	}
	printf("\n");
}
