/* Generated code for Python module 'CoreFoundation._metadata'
 * created by Nuitka version 1.5.8
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_CoreFoundation$_metadata" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_CoreFoundation$_metadata;
PyDictObject *moduledict_CoreFoundation$_metadata;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[228];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[228];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("CoreFoundation._metadata"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 228; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_CoreFoundation$_metadata(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 228; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0b045046fb73fbd49ee0ebfb3e92d335;
static PyCodeObject *codeobj_c208d9d58850d3b46ee8f0fc621682d9;
static PyCodeObject *codeobj_26aef576120e0f9e2eb777405d3a0dfa;
static PyCodeObject *codeobj_a50574e6244c64615056bfdc49d4ec9e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[224]); CHECK_OBJECT(module_filename_obj);
    codeobj_0b045046fb73fbd49ee0ebfb3e92d335 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[225], mod_consts[225], NULL, NULL, 0, 0, 0);
    codeobj_c208d9d58850d3b46ee8f0fc621682d9 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[226], NULL, 2, 0, 0);
    codeobj_26aef576120e0f9e2eb777405d3a0dfa = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[226], NULL, 2, 0, 0);
    codeobj_a50574e6244c64615056bfdc49d4ec9e = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[226], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_CoreFoundation$_metadata$$$function__1_sel32or64();


static PyObject *MAKE_FUNCTION_CoreFoundation$_metadata$$$function__3_selAorI();


static PyObject *MAKE_FUNCTION_CoreFoundation$_metadata$$$function__4_selAorI();


// The module function definitions.
static PyObject *impl_CoreFoundation$_metadata$$$function__1_sel32or64(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_b = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_b);
    tmp_return_value = par_b;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CoreFoundation$_metadata$$$function__3_selAorI(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_b = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_a);
    tmp_return_value = par_a;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_CoreFoundation$_metadata$$$function__4_selAorI(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_b = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_b);
    tmp_return_value = par_b;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_CoreFoundation$_metadata$$$function__1_sel32or64() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CoreFoundation$_metadata$$$function__1_sel32or64,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c208d9d58850d3b46ee8f0fc621682d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CoreFoundation$_metadata,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CoreFoundation$_metadata$$$function__3_selAorI() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CoreFoundation$_metadata$$$function__3_selAorI,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_26aef576120e0f9e2eb777405d3a0dfa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CoreFoundation$_metadata,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_CoreFoundation$_metadata$$$function__4_selAorI() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_CoreFoundation$_metadata$$$function__4_selAorI,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a50574e6244c64615056bfdc49d4ec9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_CoreFoundation$_metadata,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_CoreFoundation$_metadata[] = {
    impl_CoreFoundation$_metadata$$$function__1_sel32or64,
    impl_CoreFoundation$_metadata$$$function__3_selAorI,
    impl_CoreFoundation$_metadata$$$function__4_selAorI,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_CoreFoundation$_metadata;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_CoreFoundation$_metadata) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_CoreFoundation$_metadata[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_CoreFoundation$_metadata,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_CoreFoundation$_metadata(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("CoreFoundation._metadata");

    // Store the module for future use.
    module_CoreFoundation$_metadata = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("CoreFoundation._metadata: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("CoreFoundation._metadata: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("CoreFoundation._metadata: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initCoreFoundation$_metadata\n");

    moduledict_CoreFoundation$_metadata = MODULE_DICT(module_CoreFoundation$_metadata);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_CoreFoundation$_metadata,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_CoreFoundation$_metadata,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[227]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_CoreFoundation$_metadata,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_CoreFoundation$_metadata,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_CoreFoundation$_metadata,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_CoreFoundation$_metadata);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_CoreFoundation$_metadata);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_0b045046fb73fbd49ee0ebfb3e92d335;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_0b045046fb73fbd49ee0ebfb3e92d335 = MAKE_MODULE_FRAME(codeobj_0b045046fb73fbd49ee0ebfb3e92d335, module_CoreFoundation$_metadata);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0b045046fb73fbd49ee0ebfb3e92d335);
    assert(Py_REFCNT(frame_0b045046fb73fbd49ee0ebfb3e92d335) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_CoreFoundation$_metadata;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[7];
        frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 7;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_CoreFoundation$_metadata,
                mod_consts[9],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[9]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_CoreFoundation$_metadata$$$function__1_sel32or64();

        UPDATE_STRING_DICT1(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_7);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[12];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_CoreFoundation$_metadata$$$function__3_selAorI();

        UPDATE_STRING_DICT1(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_8);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_CoreFoundation$_metadata$$$function__4_selAorI();

        UPDATE_STRING_DICT1(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_9);
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_10);
    }
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_call_arg_element_3;
        tmp_dict_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_dict_arg_value_1 == NULL)) {
            tmp_dict_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        assert(!(tmp_dict_arg_value_1 == NULL));
        tmp_dict_key_1 = mod_consts[15];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[17];
        tmp_call_arg_element_2 = mod_consts[18];
        tmp_call_arg_element_3 = MAKE_LIST2(mod_consts[19],mod_consts[20]);
        frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3};
            tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[16],
                call_args
            );
        }

        Py_DECREF(tmp_call_arg_element_3);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_iterable_value_1 = _PyDict_NewPresized( 25 );
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_arg_element_4;
            PyObject *tmp_call_arg_element_5;
            PyObject *tmp_call_arg_element_6;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_arg_element_7;
            PyObject *tmp_call_arg_element_8;
            PyObject *tmp_call_arg_element_9;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_arg_element_10;
            PyObject *tmp_call_arg_element_11;
            PyObject *tmp_call_arg_element_12;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_arg_element_13;
            PyObject *tmp_call_arg_element_14;
            PyObject *tmp_call_arg_element_15;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_call_arg_element_16;
            PyObject *tmp_call_arg_element_17;
            PyObject *tmp_call_arg_element_18;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_call_arg_element_19;
            PyObject *tmp_call_arg_element_20;
            PyObject *tmp_call_arg_element_21;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_call_arg_element_22;
            PyObject *tmp_call_arg_element_23;
            PyObject *tmp_call_arg_element_24;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_call_arg_element_25;
            PyObject *tmp_call_arg_element_26;
            PyObject *tmp_call_arg_element_27;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_call_arg_element_28;
            PyObject *tmp_call_arg_element_29;
            PyObject *tmp_call_arg_element_30;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_call_arg_element_31;
            PyObject *tmp_call_arg_element_32;
            PyObject *tmp_call_arg_element_33;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_call_arg_element_34;
            PyObject *tmp_call_arg_element_35;
            PyObject *tmp_call_arg_element_36;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_call_arg_element_37;
            PyObject *tmp_call_arg_element_38;
            PyObject *tmp_call_arg_element_39;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_call_arg_element_40;
            PyObject *tmp_call_arg_element_41;
            PyObject *tmp_call_arg_element_42;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_call_arg_element_43;
            PyObject *tmp_call_arg_element_44;
            PyObject *tmp_call_arg_element_45;
            PyObject *tmp_called_instance_16;
            PyObject *tmp_call_arg_element_46;
            PyObject *tmp_call_arg_element_47;
            PyObject *tmp_call_arg_element_48;
            PyObject *tmp_called_instance_17;
            PyObject *tmp_call_arg_element_49;
            PyObject *tmp_call_arg_element_50;
            PyObject *tmp_call_arg_element_51;
            PyObject *tmp_called_instance_18;
            PyObject *tmp_call_arg_element_52;
            PyObject *tmp_call_arg_element_53;
            PyObject *tmp_call_arg_element_54;
            PyObject *tmp_called_instance_19;
            PyObject *tmp_call_arg_element_55;
            PyObject *tmp_call_arg_element_56;
            PyObject *tmp_call_arg_element_57;
            PyObject *tmp_called_instance_20;
            PyObject *tmp_call_arg_element_58;
            PyObject *tmp_call_arg_element_59;
            PyObject *tmp_call_arg_element_60;
            PyObject *tmp_called_instance_21;
            PyObject *tmp_call_arg_element_61;
            PyObject *tmp_call_arg_element_62;
            PyObject *tmp_call_arg_element_63;
            PyObject *tmp_called_instance_22;
            PyObject *tmp_call_arg_element_64;
            PyObject *tmp_call_arg_element_65;
            PyObject *tmp_call_arg_element_66;
            PyObject *tmp_called_instance_23;
            PyObject *tmp_call_arg_element_67;
            PyObject *tmp_call_arg_element_68;
            PyObject *tmp_call_arg_element_69;
            PyObject *tmp_called_instance_24;
            PyObject *tmp_call_arg_element_70;
            PyObject *tmp_call_arg_element_71;
            PyObject *tmp_call_arg_element_72;
            PyObject *tmp_called_instance_25;
            PyObject *tmp_call_arg_element_73;
            PyObject *tmp_call_arg_element_74;
            PyObject *tmp_call_arg_element_75;
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[21];
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_4 = mod_consts[22];
            tmp_call_arg_element_5 = mod_consts[23];
            tmp_call_arg_element_6 = MAKE_LIST2(mod_consts[24],mod_consts[25]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 38;
            {
                PyObject *call_args[] = {tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_2,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_6);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[26];
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_7 = mod_consts[27];
            tmp_call_arg_element_8 = mod_consts[28];
            tmp_call_arg_element_9 = MAKE_LIST3(mod_consts[29],mod_consts[30],mod_consts[31]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 43;
            {
                PyObject *call_args[] = {tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_3,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_9);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[32];
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_10 = mod_consts[33];
            tmp_call_arg_element_11 = mod_consts[34];
            tmp_call_arg_element_12 = MAKE_LIST6(mod_consts[35]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 48;
            {
                PyObject *call_args[] = {tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_4,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_12);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[36];
            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_5 == NULL)) {
                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_13 = mod_consts[37];
            tmp_call_arg_element_14 = mod_consts[38];
            tmp_call_arg_element_15 = MAKE_LIST1(mod_consts[39]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 53;
            {
                PyObject *call_args[] = {tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_5,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_15);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[40];
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_16 = mod_consts[41];
            tmp_call_arg_element_17 = mod_consts[42];
            tmp_call_arg_element_18 = MAKE_LIST2(mod_consts[43],mod_consts[44]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 58;
            {
                PyObject *call_args[] = {tmp_call_arg_element_16, tmp_call_arg_element_17, tmp_call_arg_element_18};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_6,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_18);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[45];
            tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_7 == NULL)) {
                tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_19 = mod_consts[46];
            tmp_call_arg_element_20 = mod_consts[47];
            tmp_call_arg_element_21 = MAKE_LIST2(mod_consts[48],mod_consts[49]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 61;
            {
                PyObject *call_args[] = {tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_7,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_21);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[50];
            tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_8 == NULL)) {
                tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_22 = mod_consts[51];
            tmp_call_arg_element_23 = mod_consts[52];
            tmp_call_arg_element_24 = MAKE_LIST4(mod_consts[53]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 64;
            {
                PyObject *call_args[] = {tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_8,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_24);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[54];
            tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_9 == NULL)) {
                tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_25 = mod_consts[55];
            tmp_call_arg_element_26 = mod_consts[56];
            tmp_call_arg_element_27 = MAKE_LIST2(mod_consts[57],mod_consts[58]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 69;
            {
                PyObject *call_args[] = {tmp_call_arg_element_25, tmp_call_arg_element_26, tmp_call_arg_element_27};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_9,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_27);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[59];
            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_10 == NULL)) {
                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_28 = mod_consts[60];
            tmp_call_arg_element_29 = mod_consts[61];
            tmp_call_arg_element_30 = MAKE_LIST4(mod_consts[62]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 74;
            {
                PyObject *call_args[] = {tmp_call_arg_element_28, tmp_call_arg_element_29, tmp_call_arg_element_30};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_10,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_30);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[63];
            tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_11 == NULL)) {
                tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_31 = mod_consts[64];
            tmp_call_arg_element_32 = mod_consts[65];
            tmp_call_arg_element_33 = LIST_COPY(mod_consts[66]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 79;
            {
                PyObject *call_args[] = {tmp_call_arg_element_31, tmp_call_arg_element_32, tmp_call_arg_element_33};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_11,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_33);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[67];
            tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_12 == NULL)) {
                tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_34 = mod_consts[68];
            tmp_call_arg_element_35 = mod_consts[69];
            tmp_call_arg_element_36 = MAKE_LIST1(mod_consts[70]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 101;
            {
                PyObject *call_args[] = {tmp_call_arg_element_34, tmp_call_arg_element_35, tmp_call_arg_element_36};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_12,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_36);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[71];
            tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_13 == NULL)) {
                tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_37 = mod_consts[72];
            tmp_call_arg_element_38 = mod_consts[73];
            tmp_call_arg_element_39 = MAKE_LIST1(mod_consts[74]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 104;
            {
                PyObject *call_args[] = {tmp_call_arg_element_37, tmp_call_arg_element_38, tmp_call_arg_element_39};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_13,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_39);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[75];
            tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_14 == NULL)) {
                tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_40 = mod_consts[76];
            tmp_call_arg_element_41 = mod_consts[77];
            tmp_call_arg_element_42 = MAKE_LIST1(mod_consts[78]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 109;
            {
                PyObject *call_args[] = {tmp_call_arg_element_40, tmp_call_arg_element_41, tmp_call_arg_element_42};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_14,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_42);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[79];
            tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_15 == NULL)) {
                tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_43 = mod_consts[80];
            tmp_call_arg_element_44 = mod_consts[81];
            tmp_call_arg_element_45 = MAKE_LIST2(mod_consts[82],mod_consts[83]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 114;
            {
                PyObject *call_args[] = {tmp_call_arg_element_43, tmp_call_arg_element_44, tmp_call_arg_element_45};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_15,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_45);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[84];
            tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_16 == NULL)) {
                tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_46 = mod_consts[85];
            tmp_call_arg_element_47 = mod_consts[86];
            tmp_call_arg_element_48 = MAKE_LIST2(mod_consts[3],mod_consts[87]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 117;
            {
                PyObject *call_args[] = {tmp_call_arg_element_46, tmp_call_arg_element_47, tmp_call_arg_element_48};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_16,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_48);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[88];
            tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_17 == NULL)) {
                tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_49 = mod_consts[89];
            tmp_call_arg_element_50 = mod_consts[90];
            tmp_call_arg_element_51 = MAKE_LIST2(mod_consts[91],mod_consts[92]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 122;
            {
                PyObject *call_args[] = {tmp_call_arg_element_49, tmp_call_arg_element_50, tmp_call_arg_element_51};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_17,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_51);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[93];
            tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_18 == NULL)) {
                tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_52 = mod_consts[94];
            tmp_call_arg_element_53 = mod_consts[95];
            tmp_call_arg_element_54 = MAKE_LIST2(mod_consts[96],mod_consts[97]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 125;
            {
                PyObject *call_args[] = {tmp_call_arg_element_52, tmp_call_arg_element_53, tmp_call_arg_element_54};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_18,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_54);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[98];
            tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_19 == NULL)) {
                tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_55 = mod_consts[99];
            tmp_call_arg_element_56 = mod_consts[100];
            tmp_call_arg_element_57 = MAKE_LIST6(mod_consts[101]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 130;
            {
                PyObject *call_args[] = {tmp_call_arg_element_55, tmp_call_arg_element_56, tmp_call_arg_element_57};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_19,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_57);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[102];
            tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_20 == NULL)) {
                tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_58 = mod_consts[103];
            tmp_call_arg_element_59 = mod_consts[104];
            tmp_call_arg_element_60 = MAKE_LIST1(mod_consts[105]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 135;
            {
                PyObject *call_args[] = {tmp_call_arg_element_58, tmp_call_arg_element_59, tmp_call_arg_element_60};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_20,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_60);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[106];
            tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_21 == NULL)) {
                tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_61 = mod_consts[107];
            tmp_call_arg_element_62 = mod_consts[108];
            tmp_call_arg_element_63 = MAKE_LIST4(mod_consts[109]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 140;
            {
                PyObject *call_args[] = {tmp_call_arg_element_61, tmp_call_arg_element_62, tmp_call_arg_element_63};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_21,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_63);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[110];
            tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_22 == NULL)) {
                tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_64 = mod_consts[111];
            tmp_call_arg_element_65 = mod_consts[112];
            tmp_call_arg_element_66 = MAKE_LIST1(mod_consts[39]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 145;
            {
                PyObject *call_args[] = {tmp_call_arg_element_64, tmp_call_arg_element_65, tmp_call_arg_element_66};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_22,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_66);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[113];
            tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_23 == NULL)) {
                tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_67 = mod_consts[114];
            tmp_call_arg_element_68 = mod_consts[115];
            tmp_call_arg_element_69 = MAKE_LIST4(mod_consts[116]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 150;
            {
                PyObject *call_args[] = {tmp_call_arg_element_67, tmp_call_arg_element_68, tmp_call_arg_element_69};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_23,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_69);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[117];
            tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_24 == NULL)) {
                tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_70 = mod_consts[118];
            tmp_call_arg_element_71 = mod_consts[119];
            tmp_call_arg_element_72 = MAKE_LIST1(mod_consts[70]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 155;
            {
                PyObject *call_args[] = {tmp_call_arg_element_70, tmp_call_arg_element_71, tmp_call_arg_element_72};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_24,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_72);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[120];
            tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_25 == NULL)) {
                tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto dict_build_exception_1;
            }
            tmp_call_arg_element_73 = mod_consts[121];
            tmp_call_arg_element_74 = mod_consts[122];
            tmp_call_arg_element_75 = MAKE_LIST6(mod_consts[123]);
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 158;
            {
                PyObject *call_args[] = {tmp_call_arg_element_73, tmp_call_arg_element_74, tmp_call_arg_element_75};
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_25,
                    mod_consts[16],
                    call_args
                );
            }

            Py_DECREF(tmp_call_arg_element_75);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_iterable_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_iterable_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(PyDict_Check(tmp_dict_arg_value_1));
            tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);

        Py_DECREF(tmp_iterable_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_12);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[128]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[129];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 169;
        tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[130]);

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = _PyDict_NewPresized( 43 );
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_called_value_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_called_value_8;
            PyObject *tmp_called_value_9;
            PyObject *tmp_called_value_10;
            PyObject *tmp_called_value_11;
            PyObject *tmp_called_value_12;
            PyObject *tmp_called_value_13;
            PyObject *tmp_called_value_14;
            PyObject *tmp_called_value_15;
            PyObject *tmp_called_value_16;
            PyObject *tmp_called_value_17;
            PyObject *tmp_called_value_18;
            PyObject *tmp_called_value_19;
            PyObject *tmp_called_value_20;
            PyObject *tmp_called_value_21;
            PyObject *tmp_called_value_22;
            PyObject *tmp_called_value_23;
            PyObject *tmp_called_value_24;
            PyObject *tmp_called_value_25;
            PyObject *tmp_called_value_26;
            PyObject *tmp_called_value_27;
            PyObject *tmp_called_value_28;
            PyObject *tmp_called_value_29;
            PyObject *tmp_called_value_30;
            PyObject *tmp_called_value_31;
            PyObject *tmp_called_value_32;
            PyObject *tmp_called_value_33;
            PyObject *tmp_called_value_34;
            PyObject *tmp_called_value_35;
            PyObject *tmp_called_value_36;
            PyObject *tmp_called_value_37;
            PyObject *tmp_called_value_38;
            PyObject *tmp_called_value_39;
            PyObject *tmp_called_value_40;
            PyObject *tmp_called_value_41;
            PyObject *tmp_called_value_42;
            PyObject *tmp_called_value_43;
            PyObject *tmp_called_value_44;
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[131];
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 170;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[132]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[133];
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 171;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[134]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[135];
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 172;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[136]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[137];
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 173;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[138]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[139];
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 176;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_7, mod_consts[140]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[141];
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 179;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[142]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[143];
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 180;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[144]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[145];
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 181;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_10, mod_consts[146]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[147];
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 182;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_11, mod_consts[148]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[149];
            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_12 == NULL)) {
                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 183;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_12, mod_consts[150]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[151];
            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_13 == NULL)) {
                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 184;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_13, mod_consts[152]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[153];
            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_14 == NULL)) {
                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 185;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_14, mod_consts[154]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[155];
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 186;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_15, mod_consts[156]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[157];
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 187;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_16, mod_consts[158]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[159];
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 188;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_17, mod_consts[160]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[161];
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 189;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_18, mod_consts[162]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[163];
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 190;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_19, mod_consts[164]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[165];
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 191;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[166]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[167];
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 192;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_21, mod_consts[168]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[169];
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 193;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_22, mod_consts[170]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[171];
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 194;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_23, mod_consts[172]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[173];
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 195;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_24, mod_consts[174]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[175];
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 198;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_25, mod_consts[176]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[177];
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 199;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_26, mod_consts[178]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[179];
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 200;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_27, mod_consts[180]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[181];
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 201;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_28, mod_consts[182]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[183];
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 202;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_29, mod_consts[184]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[185];
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 203;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_30, mod_consts[186]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[187];
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 204;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_31, mod_consts[188]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[189];
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 205;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_32, mod_consts[190]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[191];
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 206;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_33, mod_consts[192]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[193];
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 207;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_34, mod_consts[194]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[195];
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 208;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_35, mod_consts[196]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[197];
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 209;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_36, mod_consts[198]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[199];
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 210;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_37, mod_consts[200]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[201];
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 211;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_38, mod_consts[202]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[203];
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 212;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_39, mod_consts[204]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[205];
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 213;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_40, mod_consts[206]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[207];
            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_41 == NULL)) {
                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 214;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_41, mod_consts[208]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[209];
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 215;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_42, mod_consts[210]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[211];
            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_43 == NULL)) {
                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 216;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_43, mod_consts[212]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[213];
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 217;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_44, mod_consts[214]);

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 167;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_call_arg_element_76;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[128]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_76 = MAKE_DICT_EMPTY();
        frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 220;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_call_arg_element_76);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_call_arg_element_76);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_call_arg_element_77;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[128]);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_77 = DICT_COPY(mod_consts[215]);
        frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame.f_lineno = 221;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_call_arg_element_77);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_call_arg_element_77);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b045046fb73fbd49ee0ebfb3e92d335, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b045046fb73fbd49ee0ebfb3e92d335->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b045046fb73fbd49ee0ebfb3e92d335, exception_lineno);
    }



    assertFrameObject(frame_0b045046fb73fbd49ee0ebfb3e92d335);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = DEEP_COPY_DICT(mod_consts[216]);
        UPDATE_STRING_DICT1(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = DICT_COPY(mod_consts[218]);
        UPDATE_STRING_DICT1(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = LIST_COPY(mod_consts[220]);
        UPDATE_STRING_DICT1(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = DICT_COPY(mod_consts[222]);
        UPDATE_STRING_DICT1(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_16);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("CoreFoundation._metadata", false);

    Py_INCREF(module_CoreFoundation$_metadata);
    return module_CoreFoundation$_metadata;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_CoreFoundation$_metadata, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("CoreFoundation$_metadata", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
