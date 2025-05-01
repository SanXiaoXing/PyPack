/* Generated code for Python module 'Foundation._functiondefines'
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

/* The "module_Foundation$_functiondefines" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Foundation$_functiondefines;
PyDictObject *moduledict_Foundation$_functiondefines;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[34];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[34];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("Foundation._functiondefines"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 34; i++) {
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
void checkModuleConstants_Foundation$_functiondefines(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 34; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_537c01b3428486143a3021263f2b2bbb;
static PyCodeObject *codeobj_9b59f8c9df2709f187a064c7ddc82bdd;
static PyCodeObject *codeobj_631961034f3de6340bae8cc03d50fbca;
static PyCodeObject *codeobj_4115cb562da719834ffab329b3033ac0;
static PyCodeObject *codeobj_9b4c5f6b5519eaf6735cbe6ebdcb8362;
static PyCodeObject *codeobj_f62dc5309fe296676192c3873b801af2;
static PyCodeObject *codeobj_1d0b2877beefde48d485808a30060640;
static PyCodeObject *codeobj_bcdc77864900a2c1fd6c9b0162803611;
static PyCodeObject *codeobj_41832c82cd0798a3261f1f6f6b884c89;
static PyCodeObject *codeobj_6d40c2d060afb3d398dea5db151bd651;
static PyCodeObject *codeobj_2ebfd55b853d64cfb6381839f74ed3e0;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[27]); CHECK_OBJECT(module_filename_obj);
    codeobj_537c01b3428486143a3021263f2b2bbb = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[28], mod_consts[28], NULL, NULL, 0, 0, 0);
    codeobj_9b59f8c9df2709f187a064c7ddc82bdd = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[29], NULL, 2, 0, 0);
    codeobj_631961034f3de6340bae8cc03d50fbca = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[29], NULL, 2, 0, 0);
    codeobj_4115cb562da719834ffab329b3033ac0 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[30], NULL, 2, 0, 0);
    codeobj_9b4c5f6b5519eaf6735cbe6ebdcb8362 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[31], NULL, 3, 0, 0);
    codeobj_f62dc5309fe296676192c3873b801af2 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[32], NULL, 4, 0, 0);
    codeobj_1d0b2877beefde48d485808a30060640 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[33], NULL, 5, 0, 0);
    codeobj_bcdc77864900a2c1fd6c9b0162803611 = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[30], NULL, 2, 0, 0);
    codeobj_41832c82cd0798a3261f1f6f6b884c89 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[31], NULL, 3, 0, 0);
    codeobj_6d40c2d060afb3d398dea5db151bd651 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[32], NULL, 4, 0, 0);
    codeobj_2ebfd55b853d64cfb6381839f74ed3e0 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[33], NULL, 5, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__10_MAX();


static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__1_NSLocalizedString();


static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__2_NSLocalizedStringFromTable();


static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__3_NSLocalizedStringFromTableInBundle();


static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__4_NSLocalizedStringWithDefaultValue();


static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__5_NSLocalizedAttributedString();


static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__6_NSLocalizedAttributedStringFromTable();


static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__7_NSLocalizedAttributedStringFromTableInBundle();


static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__8_NSLocalizedAttributedStringWithDefaultValue();


static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__9_MIN();


// The module function definitions.
static PyObject *impl_Foundation$_functiondefines$$$function__1_NSLocalizedString(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_comment = python_pars[1];
    struct Nuitka_FrameObject *frame_bcdc77864900a2c1fd6c9b0162803611;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bcdc77864900a2c1fd6c9b0162803611 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bcdc77864900a2c1fd6c9b0162803611)) {
        Py_XDECREF(cache_frame_bcdc77864900a2c1fd6c9b0162803611);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bcdc77864900a2c1fd6c9b0162803611 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bcdc77864900a2c1fd6c9b0162803611 = MAKE_FUNCTION_FRAME(codeobj_bcdc77864900a2c1fd6c9b0162803611, module_Foundation$_functiondefines, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bcdc77864900a2c1fd6c9b0162803611->m_type_description == NULL);
    frame_bcdc77864900a2c1fd6c9b0162803611 = cache_frame_bcdc77864900a2c1fd6c9b0162803611;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bcdc77864900a2c1fd6c9b0162803611);
    assert(Py_REFCNT(frame_bcdc77864900a2c1fd6c9b0162803611) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bcdc77864900a2c1fd6c9b0162803611->m_frame.f_lineno = 9;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[2]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        tmp_args_element_value_2 = mod_consts[4];
        tmp_args_element_value_3 = Py_None;
        frame_bcdc77864900a2c1fd6c9b0162803611->m_frame.f_lineno = 9;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[3],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bcdc77864900a2c1fd6c9b0162803611, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bcdc77864900a2c1fd6c9b0162803611->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bcdc77864900a2c1fd6c9b0162803611, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bcdc77864900a2c1fd6c9b0162803611,
        type_description_1,
        par_key,
        par_comment
    );


    // Release cached frame if used for exception.
    if (frame_bcdc77864900a2c1fd6c9b0162803611 == cache_frame_bcdc77864900a2c1fd6c9b0162803611) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bcdc77864900a2c1fd6c9b0162803611);
        cache_frame_bcdc77864900a2c1fd6c9b0162803611 = NULL;
    }

    assertFrameObject(frame_bcdc77864900a2c1fd6c9b0162803611);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Foundation$_functiondefines$$$function__2_NSLocalizedStringFromTable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_tbl = python_pars[1];
    PyObject *par_comment = python_pars[2];
    struct Nuitka_FrameObject *frame_41832c82cd0798a3261f1f6f6b884c89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_41832c82cd0798a3261f1f6f6b884c89 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41832c82cd0798a3261f1f6f6b884c89)) {
        Py_XDECREF(cache_frame_41832c82cd0798a3261f1f6f6b884c89);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41832c82cd0798a3261f1f6f6b884c89 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41832c82cd0798a3261f1f6f6b884c89 = MAKE_FUNCTION_FRAME(codeobj_41832c82cd0798a3261f1f6f6b884c89, module_Foundation$_functiondefines, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41832c82cd0798a3261f1f6f6b884c89->m_type_description == NULL);
    frame_41832c82cd0798a3261f1f6f6b884c89 = cache_frame_41832c82cd0798a3261f1f6f6b884c89;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_41832c82cd0798a3261f1f6f6b884c89);
    assert(Py_REFCNT(frame_41832c82cd0798a3261f1f6f6b884c89) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_41832c82cd0798a3261f1f6f6b884c89->m_frame.f_lineno = 15;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[2]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        tmp_args_element_value_2 = mod_consts[4];
        CHECK_OBJECT(par_tbl);
        tmp_args_element_value_3 = par_tbl;
        frame_41832c82cd0798a3261f1f6f6b884c89->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[3],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41832c82cd0798a3261f1f6f6b884c89, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41832c82cd0798a3261f1f6f6b884c89->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41832c82cd0798a3261f1f6f6b884c89, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41832c82cd0798a3261f1f6f6b884c89,
        type_description_1,
        par_key,
        par_tbl,
        par_comment
    );


    // Release cached frame if used for exception.
    if (frame_41832c82cd0798a3261f1f6f6b884c89 == cache_frame_41832c82cd0798a3261f1f6f6b884c89) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41832c82cd0798a3261f1f6f6b884c89);
        cache_frame_41832c82cd0798a3261f1f6f6b884c89 = NULL;
    }

    assertFrameObject(frame_41832c82cd0798a3261f1f6f6b884c89);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_tbl);
    Py_DECREF(par_tbl);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_tbl);
    Py_DECREF(par_tbl);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Foundation$_functiondefines$$$function__3_NSLocalizedStringFromTableInBundle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_tbl = python_pars[1];
    PyObject *par_bundle = python_pars[2];
    PyObject *par_comment = python_pars[3];
    struct Nuitka_FrameObject *frame_6d40c2d060afb3d398dea5db151bd651;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6d40c2d060afb3d398dea5db151bd651 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6d40c2d060afb3d398dea5db151bd651)) {
        Py_XDECREF(cache_frame_6d40c2d060afb3d398dea5db151bd651);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d40c2d060afb3d398dea5db151bd651 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d40c2d060afb3d398dea5db151bd651 = MAKE_FUNCTION_FRAME(codeobj_6d40c2d060afb3d398dea5db151bd651, module_Foundation$_functiondefines, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6d40c2d060afb3d398dea5db151bd651->m_type_description == NULL);
    frame_6d40c2d060afb3d398dea5db151bd651 = cache_frame_6d40c2d060afb3d398dea5db151bd651;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6d40c2d060afb3d398dea5db151bd651);
    assert(Py_REFCNT(frame_6d40c2d060afb3d398dea5db151bd651) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_bundle);
        tmp_called_instance_1 = par_bundle;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        tmp_args_element_value_2 = mod_consts[4];
        CHECK_OBJECT(par_tbl);
        tmp_args_element_value_3 = par_tbl;
        frame_6d40c2d060afb3d398dea5db151bd651->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[3],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6d40c2d060afb3d398dea5db151bd651, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d40c2d060afb3d398dea5db151bd651->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d40c2d060afb3d398dea5db151bd651, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d40c2d060afb3d398dea5db151bd651,
        type_description_1,
        par_key,
        par_tbl,
        par_bundle,
        par_comment
    );


    // Release cached frame if used for exception.
    if (frame_6d40c2d060afb3d398dea5db151bd651 == cache_frame_6d40c2d060afb3d398dea5db151bd651) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6d40c2d060afb3d398dea5db151bd651);
        cache_frame_6d40c2d060afb3d398dea5db151bd651 = NULL;
    }

    assertFrameObject(frame_6d40c2d060afb3d398dea5db151bd651);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_tbl);
    Py_DECREF(par_tbl);
    CHECK_OBJECT(par_bundle);
    Py_DECREF(par_bundle);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_tbl);
    Py_DECREF(par_tbl);
    CHECK_OBJECT(par_bundle);
    Py_DECREF(par_bundle);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Foundation$_functiondefines$$$function__4_NSLocalizedStringWithDefaultValue(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_tbl = python_pars[1];
    PyObject *par_bundle = python_pars[2];
    PyObject *par_val = python_pars[3];
    PyObject *par_comment = python_pars[4];
    struct Nuitka_FrameObject *frame_2ebfd55b853d64cfb6381839f74ed3e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2ebfd55b853d64cfb6381839f74ed3e0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2ebfd55b853d64cfb6381839f74ed3e0)) {
        Py_XDECREF(cache_frame_2ebfd55b853d64cfb6381839f74ed3e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2ebfd55b853d64cfb6381839f74ed3e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2ebfd55b853d64cfb6381839f74ed3e0 = MAKE_FUNCTION_FRAME(codeobj_2ebfd55b853d64cfb6381839f74ed3e0, module_Foundation$_functiondefines, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2ebfd55b853d64cfb6381839f74ed3e0->m_type_description == NULL);
    frame_2ebfd55b853d64cfb6381839f74ed3e0 = cache_frame_2ebfd55b853d64cfb6381839f74ed3e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2ebfd55b853d64cfb6381839f74ed3e0);
    assert(Py_REFCNT(frame_2ebfd55b853d64cfb6381839f74ed3e0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_bundle);
        tmp_called_instance_1 = par_bundle;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        CHECK_OBJECT(par_val);
        tmp_args_element_value_2 = par_val;
        CHECK_OBJECT(par_tbl);
        tmp_args_element_value_3 = par_tbl;
        frame_2ebfd55b853d64cfb6381839f74ed3e0->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[3],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2ebfd55b853d64cfb6381839f74ed3e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ebfd55b853d64cfb6381839f74ed3e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ebfd55b853d64cfb6381839f74ed3e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2ebfd55b853d64cfb6381839f74ed3e0,
        type_description_1,
        par_key,
        par_tbl,
        par_bundle,
        par_val,
        par_comment
    );


    // Release cached frame if used for exception.
    if (frame_2ebfd55b853d64cfb6381839f74ed3e0 == cache_frame_2ebfd55b853d64cfb6381839f74ed3e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2ebfd55b853d64cfb6381839f74ed3e0);
        cache_frame_2ebfd55b853d64cfb6381839f74ed3e0 = NULL;
    }

    assertFrameObject(frame_2ebfd55b853d64cfb6381839f74ed3e0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_tbl);
    Py_DECREF(par_tbl);
    CHECK_OBJECT(par_bundle);
    Py_DECREF(par_bundle);
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_tbl);
    Py_DECREF(par_tbl);
    CHECK_OBJECT(par_bundle);
    Py_DECREF(par_bundle);
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Foundation$_functiondefines$$$function__5_NSLocalizedAttributedString(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_comment = python_pars[1];
    struct Nuitka_FrameObject *frame_4115cb562da719834ffab329b3033ac0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4115cb562da719834ffab329b3033ac0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4115cb562da719834ffab329b3033ac0)) {
        Py_XDECREF(cache_frame_4115cb562da719834ffab329b3033ac0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4115cb562da719834ffab329b3033ac0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4115cb562da719834ffab329b3033ac0 = MAKE_FUNCTION_FRAME(codeobj_4115cb562da719834ffab329b3033ac0, module_Foundation$_functiondefines, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4115cb562da719834ffab329b3033ac0->m_type_description == NULL);
    frame_4115cb562da719834ffab329b3033ac0 = cache_frame_4115cb562da719834ffab329b3033ac0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4115cb562da719834ffab329b3033ac0);
    assert(Py_REFCNT(frame_4115cb562da719834ffab329b3033ac0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4115cb562da719834ffab329b3033ac0->m_frame.f_lineno = 30;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[2]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        tmp_args_element_value_2 = mod_consts[4];
        tmp_args_element_value_3 = Py_None;
        frame_4115cb562da719834ffab329b3033ac0->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[5],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4115cb562da719834ffab329b3033ac0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4115cb562da719834ffab329b3033ac0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4115cb562da719834ffab329b3033ac0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4115cb562da719834ffab329b3033ac0,
        type_description_1,
        par_key,
        par_comment
    );


    // Release cached frame if used for exception.
    if (frame_4115cb562da719834ffab329b3033ac0 == cache_frame_4115cb562da719834ffab329b3033ac0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4115cb562da719834ffab329b3033ac0);
        cache_frame_4115cb562da719834ffab329b3033ac0 = NULL;
    }

    assertFrameObject(frame_4115cb562da719834ffab329b3033ac0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Foundation$_functiondefines$$$function__6_NSLocalizedAttributedStringFromTable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_tbl = python_pars[1];
    PyObject *par_comment = python_pars[2];
    struct Nuitka_FrameObject *frame_9b4c5f6b5519eaf6735cbe6ebdcb8362;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b4c5f6b5519eaf6735cbe6ebdcb8362 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9b4c5f6b5519eaf6735cbe6ebdcb8362)) {
        Py_XDECREF(cache_frame_9b4c5f6b5519eaf6735cbe6ebdcb8362);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b4c5f6b5519eaf6735cbe6ebdcb8362 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b4c5f6b5519eaf6735cbe6ebdcb8362 = MAKE_FUNCTION_FRAME(codeobj_9b4c5f6b5519eaf6735cbe6ebdcb8362, module_Foundation$_functiondefines, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b4c5f6b5519eaf6735cbe6ebdcb8362->m_type_description == NULL);
    frame_9b4c5f6b5519eaf6735cbe6ebdcb8362 = cache_frame_9b4c5f6b5519eaf6735cbe6ebdcb8362;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b4c5f6b5519eaf6735cbe6ebdcb8362);
    assert(Py_REFCNT(frame_9b4c5f6b5519eaf6735cbe6ebdcb8362) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        tmp_args_element_value_2 = mod_consts[4];
        CHECK_OBJECT(par_tbl);
        tmp_args_element_value_3 = par_tbl;
        frame_9b4c5f6b5519eaf6735cbe6ebdcb8362->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[5],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9b4c5f6b5519eaf6735cbe6ebdcb8362, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b4c5f6b5519eaf6735cbe6ebdcb8362->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b4c5f6b5519eaf6735cbe6ebdcb8362, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b4c5f6b5519eaf6735cbe6ebdcb8362,
        type_description_1,
        par_key,
        par_tbl,
        par_comment
    );


    // Release cached frame if used for exception.
    if (frame_9b4c5f6b5519eaf6735cbe6ebdcb8362 == cache_frame_9b4c5f6b5519eaf6735cbe6ebdcb8362) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b4c5f6b5519eaf6735cbe6ebdcb8362);
        cache_frame_9b4c5f6b5519eaf6735cbe6ebdcb8362 = NULL;
    }

    assertFrameObject(frame_9b4c5f6b5519eaf6735cbe6ebdcb8362);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_tbl);
    Py_DECREF(par_tbl);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_tbl);
    Py_DECREF(par_tbl);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Foundation$_functiondefines$$$function__7_NSLocalizedAttributedStringFromTableInBundle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_tbl = python_pars[1];
    PyObject *par_bundle = python_pars[2];
    PyObject *par_comment = python_pars[3];
    struct Nuitka_FrameObject *frame_f62dc5309fe296676192c3873b801af2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f62dc5309fe296676192c3873b801af2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f62dc5309fe296676192c3873b801af2)) {
        Py_XDECREF(cache_frame_f62dc5309fe296676192c3873b801af2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f62dc5309fe296676192c3873b801af2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f62dc5309fe296676192c3873b801af2 = MAKE_FUNCTION_FRAME(codeobj_f62dc5309fe296676192c3873b801af2, module_Foundation$_functiondefines, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f62dc5309fe296676192c3873b801af2->m_type_description == NULL);
    frame_f62dc5309fe296676192c3873b801af2 = cache_frame_f62dc5309fe296676192c3873b801af2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f62dc5309fe296676192c3873b801af2);
    assert(Py_REFCNT(frame_f62dc5309fe296676192c3873b801af2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_bundle);
        tmp_called_instance_1 = par_bundle;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        tmp_args_element_value_2 = mod_consts[4];
        CHECK_OBJECT(par_tbl);
        tmp_args_element_value_3 = par_tbl;
        frame_f62dc5309fe296676192c3873b801af2->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[5],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f62dc5309fe296676192c3873b801af2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f62dc5309fe296676192c3873b801af2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f62dc5309fe296676192c3873b801af2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f62dc5309fe296676192c3873b801af2,
        type_description_1,
        par_key,
        par_tbl,
        par_bundle,
        par_comment
    );


    // Release cached frame if used for exception.
    if (frame_f62dc5309fe296676192c3873b801af2 == cache_frame_f62dc5309fe296676192c3873b801af2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f62dc5309fe296676192c3873b801af2);
        cache_frame_f62dc5309fe296676192c3873b801af2 = NULL;
    }

    assertFrameObject(frame_f62dc5309fe296676192c3873b801af2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_tbl);
    Py_DECREF(par_tbl);
    CHECK_OBJECT(par_bundle);
    Py_DECREF(par_bundle);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_tbl);
    Py_DECREF(par_tbl);
    CHECK_OBJECT(par_bundle);
    Py_DECREF(par_bundle);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Foundation$_functiondefines$$$function__8_NSLocalizedAttributedStringWithDefaultValue(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_tbl = python_pars[1];
    PyObject *par_bundle = python_pars[2];
    PyObject *par_val = python_pars[3];
    PyObject *par_comment = python_pars[4];
    struct Nuitka_FrameObject *frame_1d0b2877beefde48d485808a30060640;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1d0b2877beefde48d485808a30060640 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1d0b2877beefde48d485808a30060640)) {
        Py_XDECREF(cache_frame_1d0b2877beefde48d485808a30060640);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d0b2877beefde48d485808a30060640 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d0b2877beefde48d485808a30060640 = MAKE_FUNCTION_FRAME(codeobj_1d0b2877beefde48d485808a30060640, module_Foundation$_functiondefines, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1d0b2877beefde48d485808a30060640->m_type_description == NULL);
    frame_1d0b2877beefde48d485808a30060640 = cache_frame_1d0b2877beefde48d485808a30060640;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1d0b2877beefde48d485808a30060640);
    assert(Py_REFCNT(frame_1d0b2877beefde48d485808a30060640) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_bundle);
        tmp_called_instance_1 = par_bundle;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        CHECK_OBJECT(par_val);
        tmp_args_element_value_2 = par_val;
        CHECK_OBJECT(par_tbl);
        tmp_args_element_value_3 = par_tbl;
        frame_1d0b2877beefde48d485808a30060640->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[5],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1d0b2877beefde48d485808a30060640, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d0b2877beefde48d485808a30060640->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d0b2877beefde48d485808a30060640, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d0b2877beefde48d485808a30060640,
        type_description_1,
        par_key,
        par_tbl,
        par_bundle,
        par_val,
        par_comment
    );


    // Release cached frame if used for exception.
    if (frame_1d0b2877beefde48d485808a30060640 == cache_frame_1d0b2877beefde48d485808a30060640) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1d0b2877beefde48d485808a30060640);
        cache_frame_1d0b2877beefde48d485808a30060640 = NULL;
    }

    assertFrameObject(frame_1d0b2877beefde48d485808a30060640);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_tbl);
    Py_DECREF(par_tbl);
    CHECK_OBJECT(par_bundle);
    Py_DECREF(par_bundle);
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_tbl);
    Py_DECREF(par_tbl);
    CHECK_OBJECT(par_bundle);
    Py_DECREF(par_bundle);
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_comment);
    Py_DECREF(par_comment);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Foundation$_functiondefines$$$function__9_MIN(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_b = python_pars[1];
    struct Nuitka_FrameObject *frame_631961034f3de6340bae8cc03d50fbca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_631961034f3de6340bae8cc03d50fbca = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_631961034f3de6340bae8cc03d50fbca)) {
        Py_XDECREF(cache_frame_631961034f3de6340bae8cc03d50fbca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_631961034f3de6340bae8cc03d50fbca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_631961034f3de6340bae8cc03d50fbca = MAKE_FUNCTION_FRAME(codeobj_631961034f3de6340bae8cc03d50fbca, module_Foundation$_functiondefines, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_631961034f3de6340bae8cc03d50fbca->m_type_description == NULL);
    frame_631961034f3de6340bae8cc03d50fbca = cache_frame_631961034f3de6340bae8cc03d50fbca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_631961034f3de6340bae8cc03d50fbca);
    assert(Py_REFCNT(frame_631961034f3de6340bae8cc03d50fbca) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_a);
        tmp_cmp_expr_left_1 = par_a;
        CHECK_OBJECT(par_b);
        tmp_cmp_expr_right_1 = par_b;
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_a);
    tmp_return_value = par_a;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    CHECK_OBJECT(par_b);
    tmp_return_value = par_b;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_631961034f3de6340bae8cc03d50fbca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_631961034f3de6340bae8cc03d50fbca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_631961034f3de6340bae8cc03d50fbca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_631961034f3de6340bae8cc03d50fbca,
        type_description_1,
        par_a,
        par_b
    );


    // Release cached frame if used for exception.
    if (frame_631961034f3de6340bae8cc03d50fbca == cache_frame_631961034f3de6340bae8cc03d50fbca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_631961034f3de6340bae8cc03d50fbca);
        cache_frame_631961034f3de6340bae8cc03d50fbca = NULL;
    }

    assertFrameObject(frame_631961034f3de6340bae8cc03d50fbca);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

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


static PyObject *impl_Foundation$_functiondefines$$$function__10_MAX(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_b = python_pars[1];
    struct Nuitka_FrameObject *frame_9b59f8c9df2709f187a064c7ddc82bdd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9b59f8c9df2709f187a064c7ddc82bdd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9b59f8c9df2709f187a064c7ddc82bdd)) {
        Py_XDECREF(cache_frame_9b59f8c9df2709f187a064c7ddc82bdd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b59f8c9df2709f187a064c7ddc82bdd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b59f8c9df2709f187a064c7ddc82bdd = MAKE_FUNCTION_FRAME(codeobj_9b59f8c9df2709f187a064c7ddc82bdd, module_Foundation$_functiondefines, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b59f8c9df2709f187a064c7ddc82bdd->m_type_description == NULL);
    frame_9b59f8c9df2709f187a064c7ddc82bdd = cache_frame_9b59f8c9df2709f187a064c7ddc82bdd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b59f8c9df2709f187a064c7ddc82bdd);
    assert(Py_REFCNT(frame_9b59f8c9df2709f187a064c7ddc82bdd) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_a);
        tmp_cmp_expr_left_1 = par_a;
        CHECK_OBJECT(par_b);
        tmp_cmp_expr_right_1 = par_b;
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_b);
    tmp_return_value = par_b;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    CHECK_OBJECT(par_a);
    tmp_return_value = par_a;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9b59f8c9df2709f187a064c7ddc82bdd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b59f8c9df2709f187a064c7ddc82bdd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b59f8c9df2709f187a064c7ddc82bdd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b59f8c9df2709f187a064c7ddc82bdd,
        type_description_1,
        par_a,
        par_b
    );


    // Release cached frame if used for exception.
    if (frame_9b59f8c9df2709f187a064c7ddc82bdd == cache_frame_9b59f8c9df2709f187a064c7ddc82bdd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b59f8c9df2709f187a064c7ddc82bdd);
        cache_frame_9b59f8c9df2709f187a064c7ddc82bdd = NULL;
    }

    assertFrameObject(frame_9b59f8c9df2709f187a064c7ddc82bdd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

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



static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__10_MAX() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Foundation$_functiondefines$$$function__10_MAX,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9b59f8c9df2709f187a064c7ddc82bdd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Foundation$_functiondefines,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__1_NSLocalizedString() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Foundation$_functiondefines$$$function__1_NSLocalizedString,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bcdc77864900a2c1fd6c9b0162803611,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Foundation$_functiondefines,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__2_NSLocalizedStringFromTable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Foundation$_functiondefines$$$function__2_NSLocalizedStringFromTable,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_41832c82cd0798a3261f1f6f6b884c89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Foundation$_functiondefines,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__3_NSLocalizedStringFromTableInBundle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Foundation$_functiondefines$$$function__3_NSLocalizedStringFromTableInBundle,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6d40c2d060afb3d398dea5db151bd651,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Foundation$_functiondefines,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__4_NSLocalizedStringWithDefaultValue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Foundation$_functiondefines$$$function__4_NSLocalizedStringWithDefaultValue,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2ebfd55b853d64cfb6381839f74ed3e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Foundation$_functiondefines,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__5_NSLocalizedAttributedString() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Foundation$_functiondefines$$$function__5_NSLocalizedAttributedString,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4115cb562da719834ffab329b3033ac0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Foundation$_functiondefines,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__6_NSLocalizedAttributedStringFromTable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Foundation$_functiondefines$$$function__6_NSLocalizedAttributedStringFromTable,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9b4c5f6b5519eaf6735cbe6ebdcb8362,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Foundation$_functiondefines,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__7_NSLocalizedAttributedStringFromTableInBundle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Foundation$_functiondefines$$$function__7_NSLocalizedAttributedStringFromTableInBundle,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f62dc5309fe296676192c3873b801af2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Foundation$_functiondefines,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__8_NSLocalizedAttributedStringWithDefaultValue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Foundation$_functiondefines$$$function__8_NSLocalizedAttributedStringWithDefaultValue,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1d0b2877beefde48d485808a30060640,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Foundation$_functiondefines,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Foundation$_functiondefines$$$function__9_MIN() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Foundation$_functiondefines$$$function__9_MIN,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_631961034f3de6340bae8cc03d50fbca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Foundation$_functiondefines,
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

function_impl_code functable_Foundation$_functiondefines[] = {
    impl_Foundation$_functiondefines$$$function__1_NSLocalizedString,
    impl_Foundation$_functiondefines$$$function__2_NSLocalizedStringFromTable,
    impl_Foundation$_functiondefines$$$function__3_NSLocalizedStringFromTableInBundle,
    impl_Foundation$_functiondefines$$$function__4_NSLocalizedStringWithDefaultValue,
    impl_Foundation$_functiondefines$$$function__5_NSLocalizedAttributedString,
    impl_Foundation$_functiondefines$$$function__6_NSLocalizedAttributedStringFromTable,
    impl_Foundation$_functiondefines$$$function__7_NSLocalizedAttributedStringFromTableInBundle,
    impl_Foundation$_functiondefines$$$function__8_NSLocalizedAttributedStringWithDefaultValue,
    impl_Foundation$_functiondefines$$$function__9_MIN,
    impl_Foundation$_functiondefines$$$function__10_MAX,
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

    function_impl_code *current = functable_Foundation$_functiondefines;
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

    if (offset > sizeof(functable_Foundation$_functiondefines) || offset < 0) {
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
        functable_Foundation$_functiondefines[offset],
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
        module_Foundation$_functiondefines,
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
PyObject *modulecode_Foundation$_functiondefines(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("Foundation._functiondefines");

    // Store the module for future use.
    module_Foundation$_functiondefines = module;

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
        PRINT_STRING("Foundation._functiondefines: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Foundation._functiondefines: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Foundation._functiondefines: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initFoundation$_functiondefines\n");

    moduledict_Foundation$_functiondefines = MODULE_DICT(module_Foundation$_functiondefines);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_Foundation$_functiondefines,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Foundation$_functiondefines,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[4]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Foundation$_functiondefines,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Foundation$_functiondefines,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Foundation$_functiondefines,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Foundation$_functiondefines);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Foundation$_functiondefines);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_537c01b3428486143a3021263f2b2bbb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[6];
        UPDATE_STRING_DICT0(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_2);
    }
    frame_537c01b3428486143a3021263f2b2bbb = MAKE_MODULE_FRAME(codeobj_537c01b3428486143a3021263f2b2bbb, module_Foundation$_functiondefines);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_537c01b3428486143a3021263f2b2bbb);
    assert(Py_REFCNT(frame_537c01b3428486143a3021263f2b2bbb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[11], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[13];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_Foundation$_functiondefines;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[14];
        frame_537c01b3428486143a3021263f2b2bbb->m_frame.f_lineno = 5;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_537c01b3428486143a3021263f2b2bbb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_537c01b3428486143a3021263f2b2bbb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_537c01b3428486143a3021263f2b2bbb, exception_lineno);
    }



    assertFrameObject(frame_537c01b3428486143a3021263f2b2bbb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_Foundation$_functiondefines$$$function__1_NSLocalizedString();

        UPDATE_STRING_DICT1(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_Foundation$_functiondefines$$$function__2_NSLocalizedStringFromTable();

        UPDATE_STRING_DICT1(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_Foundation$_functiondefines$$$function__3_NSLocalizedStringFromTableInBundle();

        UPDATE_STRING_DICT1(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_Foundation$_functiondefines$$$function__4_NSLocalizedStringWithDefaultValue();

        UPDATE_STRING_DICT1(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_Foundation$_functiondefines$$$function__5_NSLocalizedAttributedString();

        UPDATE_STRING_DICT1(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_Foundation$_functiondefines$$$function__6_NSLocalizedAttributedStringFromTable();

        UPDATE_STRING_DICT1(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_Foundation$_functiondefines$$$function__7_NSLocalizedAttributedStringFromTableInBundle();

        UPDATE_STRING_DICT1(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_Foundation$_functiondefines$$$function__8_NSLocalizedAttributedStringWithDefaultValue();

        UPDATE_STRING_DICT1(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_Foundation$_functiondefines$$$function__9_MIN();

        UPDATE_STRING_DICT1(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_Foundation$_functiondefines$$$function__10_MAX();

        UPDATE_STRING_DICT1(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = LOOKUP_BUILTIN(mod_consts[25]);
        assert(tmp_assign_source_15 != NULL);
        UPDATE_STRING_DICT0(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_15);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("Foundation._functiondefines", false);

    Py_INCREF(module_Foundation$_functiondefines);
    return module_Foundation$_functiondefines;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Foundation$_functiondefines, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("Foundation$_functiondefines", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
