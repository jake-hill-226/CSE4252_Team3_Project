/* Generated code for Python source for module 'pdfminer.encodingdb'
 * created by Nuitka version 0.5.28.1
 *
 * This code is in part copyright 2017 Kay Hayen.
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

#include "__helpers.h"

/* The _module_pdfminer$encodingdb is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pdfminer$encodingdb;
PyDictObject *moduledict_pdfminer$encodingdb;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_ddb50d0e16be6ad937d2fdb68937e15e;
static PyObject *const_str_plain_pdf2unicode;
extern PyObject *const_str_plain_PDFDocEncoding;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_glyphname2unicode;
extern PyObject *const_str_plain_unichr;
extern PyObject *const_str_plain_klass;
extern PyObject *const_str_plain_diff;
static PyObject *const_tuple_227d5afb82640655740ab07284df0300_tuple;
static PyObject *const_tuple_str_plain_name_str_plain_m_tuple;
static PyObject *const_tuple_str_plain_glyphname2unicode_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_plain_pdf;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_name2unicode;
static PyObject *const_str_plain_mac;
static PyObject *const_tuple_str_digest_a3854b92164128da271aa486098ad186_tuple;
static PyObject *const_str_plain_win2unicode;
extern PyObject *const_tuple_str_plain_PSLiteral_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_latin_enc;
static PyObject *const_str_digest_a3854b92164128da271aa486098ad186;
extern PyObject *const_str_plain_cid2unicode;
extern PyObject *const_str_plain_StandardEncoding;
static PyObject *const_str_plain_encodings;
extern PyObject *const_str_plain_get_encoding;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_mac2unicode;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_glyphlist;
static PyObject *const_str_plain_std2unicode;
static PyObject *const_str_plain_std;
extern PyObject *const_str_plain_ENCODING;
static PyObject *const_str_plain_win;
static PyObject *const_str_plain_WinAnsiEncoding;
extern PyObject *const_str_plain_cid;
static PyObject *const_tuple_str_plain_ENCODING_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_PSLiteral;
static PyObject *const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_bbf5cb3c06f42b5859aad9a6f857d057;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_EncodingDB;
extern PyObject *const_str_plain_c;
static PyObject *const_str_plain_MacRomanEncoding;
extern PyObject *const_str_plain_psparser;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_group;
static PyObject *const_str_plain_STRIP_NAME;
extern PyObject *const_str_plain_re;
static PyObject *const_str_digest_5d7943a6d73509730fda348986ee4b14;
static PyObject *const_str_digest_9a18d2973467a7a08872a998812eaf80;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_ddb50d0e16be6ad937d2fdb68937e15e = UNSTREAM_STRING( &constant_bin[ 7989 ], 28, 0 );
    const_str_plain_pdf2unicode = UNSTREAM_STRING( &constant_bin[ 8017 ], 11, 1 );
    const_tuple_227d5afb82640655740ab07284df0300_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_227d5afb82640655740ab07284df0300_tuple, 0, const_str_plain_klass ); Py_INCREF( const_str_plain_klass );
    PyTuple_SET_ITEM( const_tuple_227d5afb82640655740ab07284df0300_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_227d5afb82640655740ab07284df0300_tuple, 2, const_str_plain_diff ); Py_INCREF( const_str_plain_diff );
    PyTuple_SET_ITEM( const_tuple_227d5afb82640655740ab07284df0300_tuple, 3, const_str_plain_cid2unicode ); Py_INCREF( const_str_plain_cid2unicode );
    PyTuple_SET_ITEM( const_tuple_227d5afb82640655740ab07284df0300_tuple, 4, const_str_plain_cid ); Py_INCREF( const_str_plain_cid );
    PyTuple_SET_ITEM( const_tuple_227d5afb82640655740ab07284df0300_tuple, 5, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_tuple_str_plain_name_str_plain_m_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_m_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_m_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_tuple_str_plain_glyphname2unicode_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_glyphname2unicode_tuple, 0, const_str_plain_glyphname2unicode ); Py_INCREF( const_str_plain_glyphname2unicode );
    const_str_plain_pdf = UNSTREAM_STRING( &constant_bin[ 35 ], 3, 1 );
    const_str_plain_mac = UNSTREAM_STRING( &constant_bin[ 8028 ], 3, 1 );
    const_tuple_str_digest_a3854b92164128da271aa486098ad186_tuple = PyTuple_New( 1 );
    const_str_digest_a3854b92164128da271aa486098ad186 = UNSTREAM_STRING( &constant_bin[ 8031 ], 6, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a3854b92164128da271aa486098ad186_tuple, 0, const_str_digest_a3854b92164128da271aa486098ad186 ); Py_INCREF( const_str_digest_a3854b92164128da271aa486098ad186 );
    const_str_plain_win2unicode = UNSTREAM_STRING( &constant_bin[ 8037 ], 11, 1 );
    const_str_plain_latin_enc = UNSTREAM_STRING( &constant_bin[ 8048 ], 9, 1 );
    const_str_plain_encodings = UNSTREAM_STRING( &constant_bin[ 8057 ], 9, 1 );
    const_str_plain_mac2unicode = UNSTREAM_STRING( &constant_bin[ 8066 ], 11, 1 );
    const_str_plain_glyphlist = UNSTREAM_STRING( &constant_bin[ 8077 ], 9, 1 );
    const_str_plain_std2unicode = UNSTREAM_STRING( &constant_bin[ 8086 ], 11, 1 );
    const_str_plain_std = UNSTREAM_STRING( &constant_bin[ 8086 ], 3, 1 );
    const_str_plain_win = UNSTREAM_STRING( &constant_bin[ 8037 ], 3, 1 );
    const_str_plain_WinAnsiEncoding = UNSTREAM_STRING( &constant_bin[ 8097 ], 15, 1 );
    const_tuple_str_plain_ENCODING_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ENCODING_tuple, 0, const_str_plain_ENCODING ); Py_INCREF( const_str_plain_ENCODING );
    const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 1, const_str_plain_std2unicode ); Py_INCREF( const_str_plain_std2unicode );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 2, const_str_plain_mac2unicode ); Py_INCREF( const_str_plain_mac2unicode );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 3, const_str_plain_win2unicode ); Py_INCREF( const_str_plain_win2unicode );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 4, const_str_plain_pdf2unicode ); Py_INCREF( const_str_plain_pdf2unicode );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 5, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 6, const_str_plain_std ); Py_INCREF( const_str_plain_std );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 7, const_str_plain_mac ); Py_INCREF( const_str_plain_mac );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 8, const_str_plain_win ); Py_INCREF( const_str_plain_win );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 9, const_str_plain_pdf ); Py_INCREF( const_str_plain_pdf );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 10, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 11, const_str_plain_encodings ); Py_INCREF( const_str_plain_encodings );
    PyTuple_SET_ITEM( const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 12, const_str_plain_get_encoding ); Py_INCREF( const_str_plain_get_encoding );
    const_str_digest_bbf5cb3c06f42b5859aad9a6f857d057 = UNSTREAM_STRING( &constant_bin[ 8112 ], 46, 0 );
    const_str_plain_MacRomanEncoding = UNSTREAM_STRING( &constant_bin[ 8158 ], 16, 1 );
    const_str_plain_STRIP_NAME = UNSTREAM_STRING( &constant_bin[ 8174 ], 10, 1 );
    const_str_digest_5d7943a6d73509730fda348986ee4b14 = UNSTREAM_STRING( &constant_bin[ 8184 ], 22, 0 );
    const_str_digest_9a18d2973467a7a08872a998812eaf80 = UNSTREAM_STRING( &constant_bin[ 7997 ], 19, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pdfminer$encodingdb( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4c0d10bd34d9fa897be469f8e2c235c9;
static PyCodeObject *codeobj_e1a5f7bbf2af7a2301e5bf9c0224250e;
static PyCodeObject *codeobj_09f44dd416fffd37f7bc0022c759445a;
static PyCodeObject *codeobj_87a2d374e8e801fc263fbede0bd154b4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_5d7943a6d73509730fda348986ee4b14 );
    codeobj_4c0d10bd34d9fa897be469f8e2c235c9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ddb50d0e16be6ad937d2fdb68937e15e, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_e1a5f7bbf2af7a2301e5bf9c0224250e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EncodingDB, 25, const_tuple_2b1c1dc831aa055d6841000b76c2f915_tuple, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_09f44dd416fffd37f7bc0022c759445a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_encoding, 49, const_tuple_227d5afb82640655740ab07284df0300_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_87a2d374e8e801fc263fbede0bd154b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_name2unicode, 13, const_tuple_str_plain_name_str_plain_m_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pdfminer$encodingdb$$$function_1_name2unicode(  );


static PyObject *MAKE_FUNCTION_pdfminer$encodingdb$$$function_2_get_encoding( PyObject *defaults );


// The module function definitions.
static PyObject *impl_pdfminer$encodingdb$$$function_1_name2unicode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_m = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_87a2d374e8e801fc263fbede0bd154b4 = NULL;

    struct Nuitka_FrameObject *frame_87a2d374e8e801fc263fbede0bd154b4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_87a2d374e8e801fc263fbede0bd154b4, codeobj_87a2d374e8e801fc263fbede0bd154b4, module_pdfminer$encodingdb, sizeof(void *)+sizeof(void *) );
    frame_87a2d374e8e801fc263fbede0bd154b4 = cache_frame_87a2d374e8e801fc263fbede0bd154b4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_87a2d374e8e801fc263fbede0bd154b4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_87a2d374e8e801fc263fbede0bd154b4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_name;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_glyphname2unicode );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glyphname2unicode );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "glyphname2unicode" );
        exception_tb = NULL;

        exception_lineno = 15;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_glyphname2unicode );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glyphname2unicode );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "glyphname2unicode" );
        exception_tb = NULL;

        exception_lineno = 16;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = par_name;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_STRIP_NAME );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STRIP_NAME );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "STRIP_NAME" );
        exception_tb = NULL;

        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_87a2d374e8e801fc263fbede0bd154b4->m_frame.f_lineno = 17;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_search, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_m == NULL );
    var_m = tmp_assign_source_1;

    tmp_cond_value_1 = var_m;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = par_name;

    CHECK_OBJECT( tmp_make_exception_arg_1 );
    frame_87a2d374e8e801fc263fbede0bd154b4->m_frame.f_lineno = 19;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_KeyError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 19;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_unichr );
    assert( tmp_called_name_1 != NULL );
    tmp_called_instance_2 = var_m;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_87a2d374e8e801fc263fbede0bd154b4->m_frame.f_lineno = 20;
    tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_87a2d374e8e801fc263fbede0bd154b4->m_frame.f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_87a2d374e8e801fc263fbede0bd154b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_87a2d374e8e801fc263fbede0bd154b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_87a2d374e8e801fc263fbede0bd154b4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_87a2d374e8e801fc263fbede0bd154b4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_87a2d374e8e801fc263fbede0bd154b4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_87a2d374e8e801fc263fbede0bd154b4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_87a2d374e8e801fc263fbede0bd154b4,
        type_description_1,
        par_name,
        var_m
    );


    // Release cached frame.
    if ( frame_87a2d374e8e801fc263fbede0bd154b4 == cache_frame_87a2d374e8e801fc263fbede0bd154b4 )
    {
        Py_DECREF( frame_87a2d374e8e801fc263fbede0bd154b4 );
    }
    cache_frame_87a2d374e8e801fc263fbede0bd154b4 = NULL;

    assertFrameObject( frame_87a2d374e8e801fc263fbede0bd154b4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$encodingdb$$$function_1_name2unicode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$encodingdb$$$function_1_name2unicode );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$encodingdb$$$function_2_get_encoding( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_klass = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_diff = python_pars[ 2 ];
    PyObject *var_cid2unicode = NULL;
    PyObject *var_cid = NULL;
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_09f44dd416fffd37f7bc0022c759445a = NULL;

    struct Nuitka_FrameObject *frame_09f44dd416fffd37f7bc0022c759445a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_09f44dd416fffd37f7bc0022c759445a, codeobj_09f44dd416fffd37f7bc0022c759445a, module_pdfminer$encodingdb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_09f44dd416fffd37f7bc0022c759445a = cache_frame_09f44dd416fffd37f7bc0022c759445a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_09f44dd416fffd37f7bc0022c759445a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_09f44dd416fffd37f7bc0022c759445a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_klass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_encodings );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_3 = par_klass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_std2unicode );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 51;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_09f44dd416fffd37f7bc0022c759445a->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cid2unicode == NULL );
    var_cid2unicode = tmp_assign_source_1;

    tmp_cond_value_1 = par_diff;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = var_cid2unicode;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_09f44dd416fffd37f7bc0022c759445a->m_frame.f_lineno = 53;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_cid2unicode;
        assert( old != NULL );
        var_cid2unicode = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_assign_source_3 = const_int_0;
    assert( var_cid == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_cid = tmp_assign_source_3;

    tmp_iter_arg_1 = par_diff;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            exception_lineno = 55;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_6;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_isinstance_inst_1 = var_x;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyInt_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_7 = var_x;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_cid;
        var_cid = tmp_assign_source_7;
        Py_INCREF( var_cid );
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_isinstance_inst_2 = var_x;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_PSLiteral );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSLiteral );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PSLiteral" );
        exception_tb = NULL;

        exception_lineno = 58;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_name2unicode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name2unicode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "name2unicode" );
        exception_tb = NULL;

        exception_lineno = 60;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    tmp_source_name_4 = var_x;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    frame_09f44dd416fffd37f7bc0022c759445a->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_ass_subscribed_1 = var_cid2unicode;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = var_cid;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "cid" );
        exception_tb = NULL;

        exception_lineno = 60;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_09f44dd416fffd37f7bc0022c759445a );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_09f44dd416fffd37f7bc0022c759445a, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_09f44dd416fffd37f7bc0022c759445a, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 59;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_09f44dd416fffd37f7bc0022c759445a->m_frame) frame_09f44dd416fffd37f7bc0022c759445a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_2;
    branch_no_4:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$encodingdb$$$function_2_get_encoding );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_left_name_1 = var_cid;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "cid" );
        exception_tb = NULL;

        exception_lineno = 63;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_8 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    var_cid = tmp_assign_source_8;

    branch_no_3:;
    branch_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    branch_no_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_09f44dd416fffd37f7bc0022c759445a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_09f44dd416fffd37f7bc0022c759445a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_09f44dd416fffd37f7bc0022c759445a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_09f44dd416fffd37f7bc0022c759445a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_09f44dd416fffd37f7bc0022c759445a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_09f44dd416fffd37f7bc0022c759445a,
        type_description_1,
        par_klass,
        par_name,
        par_diff,
        var_cid2unicode,
        var_cid,
        var_x
    );


    // Release cached frame.
    if ( frame_09f44dd416fffd37f7bc0022c759445a == cache_frame_09f44dd416fffd37f7bc0022c759445a )
    {
        Py_DECREF( frame_09f44dd416fffd37f7bc0022c759445a );
    }
    cache_frame_09f44dd416fffd37f7bc0022c759445a = NULL;

    assertFrameObject( frame_09f44dd416fffd37f7bc0022c759445a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_cid2unicode;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$encodingdb$$$function_2_get_encoding );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_klass );
    Py_DECREF( par_klass );
    par_klass = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_diff );
    Py_DECREF( par_diff );
    par_diff = NULL;

    CHECK_OBJECT( (PyObject *)var_cid2unicode );
    Py_DECREF( var_cid2unicode );
    var_cid2unicode = NULL;

    Py_XDECREF( var_cid );
    var_cid = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_klass );
    Py_DECREF( par_klass );
    par_klass = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_diff );
    Py_DECREF( par_diff );
    par_diff = NULL;

    Py_XDECREF( var_cid2unicode );
    var_cid2unicode = NULL;

    Py_XDECREF( var_cid );
    var_cid = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$encodingdb$$$function_2_get_encoding );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_pdfminer$encodingdb$$$function_1_name2unicode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$encodingdb$$$function_1_name2unicode,
        const_str_plain_name2unicode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_87a2d374e8e801fc263fbede0bd154b4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$encodingdb,
        const_str_digest_bbf5cb3c06f42b5859aad9a6f857d057,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$encodingdb$$$function_2_get_encoding( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$encodingdb$$$function_2_get_encoding,
        const_str_plain_get_encoding,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_09f44dd416fffd37f7bc0022c759445a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$encodingdb,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pdfminer$encodingdb =
{
    PyModuleDef_HEAD_INIT,
    "pdfminer.encodingdb",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( pdfminer$encodingdb )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pdfminer$encodingdb );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pdfminer.encodingdb: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pdfminer.encodingdb: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpdfminer$encodingdb" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pdfminer$encodingdb = Py_InitModule4(
        "pdfminer.encodingdb",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pdfminer$encodingdb = PyModule_Create( &mdef_pdfminer$encodingdb );
#endif

    moduledict_pdfminer$encodingdb = MODULE_DICT( module_pdfminer$encodingdb );

    CHECK_OBJECT( module_pdfminer$encodingdb );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9a18d2973467a7a08872a998812eaf80, module_pdfminer$encodingdb );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var_std2unicode = NULL;
    PyObject *outline_0_var_mac2unicode = NULL;
    PyObject *outline_0_var_win2unicode = NULL;
    PyObject *outline_0_var_pdf2unicode = NULL;
    PyObject *outline_0_var_name = NULL;
    PyObject *outline_0_var_std = NULL;
    PyObject *outline_0_var_mac = NULL;
    PyObject *outline_0_var_win = NULL;
    PyObject *outline_0_var_pdf = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *outline_0_var_encodings = NULL;
    PyObject *outline_0_var_get_encoding = NULL;
    PyObject *tmp_EncodingDB$for_loop_1__for_iterator = NULL;
    PyObject *tmp_EncodingDB$for_loop_1__iter_value = NULL;
    PyObject *tmp_EncodingDB$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_EncodingDB$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_EncodingDB$tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_EncodingDB$tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_EncodingDB$tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_EncodingDB$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_classmethod_arg_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    static struct Nuitka_FrameObject *cache_frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2 = NULL;

    struct Nuitka_FrameObject *frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2;

    struct Nuitka_FrameObject *frame_4c0d10bd34d9fa897be469f8e2c235c9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_4c0d10bd34d9fa897be469f8e2c235c9 = MAKE_MODULE_FRAME( codeobj_4c0d10bd34d9fa897be469f8e2c235c9, module_pdfminer$encodingdb );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4c0d10bd34d9fa897be469f8e2c235c9 );
    assert( Py_REFCNT( frame_4c0d10bd34d9fa897be469f8e2c235c9 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_re;
    tmp_globals_name_1 = (PyObject *)moduledict_pdfminer$encodingdb;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_4c0d10bd34d9fa897be469f8e2c235c9->m_frame.f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_psparser;
    tmp_globals_name_2 = (PyObject *)moduledict_pdfminer$encodingdb;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_PSLiteral_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_4c0d10bd34d9fa897be469f8e2c235c9->m_frame.f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_PSLiteral );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_PSLiteral, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_glyphlist;
    tmp_globals_name_3 = (PyObject *)moduledict_pdfminer$encodingdb;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_glyphname2unicode_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_4c0d10bd34d9fa897be469f8e2c235c9->m_frame.f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_glyphname2unicode );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_glyphname2unicode, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_latin_enc;
    tmp_globals_name_4 = (PyObject *)moduledict_pdfminer$encodingdb;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_ENCODING_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_4c0d10bd34d9fa897be469f8e2c235c9->m_frame.f_lineno = 5;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ENCODING );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_ENCODING, tmp_assign_source_7 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 8;

        goto frame_exception_exit_1;
    }

    frame_4c0d10bd34d9fa897be469f8e2c235c9->m_frame.f_lineno = 8;
    tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_a3854b92164128da271aa486098ad186_tuple, 0 ) );

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_STRIP_NAME, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_pdfminer$encodingdb$$$function_1_name2unicode(  );
    UPDATE_STRING_DICT1( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_name2unicode, tmp_assign_source_9 );
    // Tried code:
    tmp_assign_source_11 = const_str_digest_9a18d2973467a7a08872a998812eaf80;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_11 );
    outline_0_var___module__ = tmp_assign_source_11;

    tmp_assign_source_12 = PyDict_New();
    assert( outline_0_var_std2unicode == NULL );
    outline_0_var_std2unicode = tmp_assign_source_12;

    tmp_assign_source_13 = PyDict_New();
    assert( outline_0_var_mac2unicode == NULL );
    outline_0_var_mac2unicode = tmp_assign_source_13;

    tmp_assign_source_14 = PyDict_New();
    assert( outline_0_var_win2unicode == NULL );
    outline_0_var_win2unicode = tmp_assign_source_14;

    tmp_assign_source_15 = PyDict_New();
    assert( outline_0_var_pdf2unicode == NULL );
    outline_0_var_pdf2unicode = tmp_assign_source_15;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2, codeobj_e1a5f7bbf2af7a2301e5bf9c0224250e, module_pdfminer$encodingdb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2 = cache_frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_ENCODING );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ENCODING );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ENCODING" );
        exception_tb = NULL;

        exception_lineno = 31;
        type_description_2 = "oooooNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_2 = "oooooNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( tmp_EncodingDB$for_loop_1__for_iterator == NULL );
    tmp_EncodingDB$for_loop_1__for_iterator = tmp_assign_source_16;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_EncodingDB$for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_2 = "oooooNNNNNNNN";
            exception_lineno = 31;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_EncodingDB$for_loop_1__iter_value;
        tmp_EncodingDB$for_loop_1__iter_value = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_EncodingDB$for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_2 = "oooooNNNNNNNN";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_EncodingDB$tuple_unpack_1__source_iter;
        tmp_EncodingDB$tuple_unpack_1__source_iter = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_EncodingDB$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_19 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooNNNNNNNN";
        exception_lineno = 31;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_EncodingDB$tuple_unpack_1__element_1;
        tmp_EncodingDB$tuple_unpack_1__element_1 = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_EncodingDB$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_20 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooNNNNNNNN";
        exception_lineno = 31;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_EncodingDB$tuple_unpack_1__element_2;
        tmp_EncodingDB$tuple_unpack_1__element_2 = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_EncodingDB$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_21 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooNNNNNNNN";
        exception_lineno = 31;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_EncodingDB$tuple_unpack_1__element_3;
        tmp_EncodingDB$tuple_unpack_1__element_3 = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_EncodingDB$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_4, 3 );
    if ( tmp_assign_source_22 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooNNNNNNNN";
        exception_lineno = 31;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_EncodingDB$tuple_unpack_1__element_4;
        tmp_EncodingDB$tuple_unpack_1__element_4 = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_unpack_5 = tmp_EncodingDB$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_5, 4 );
    if ( tmp_assign_source_23 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooNNNNNNNN";
        exception_lineno = 31;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_EncodingDB$tuple_unpack_1__element_5;
        tmp_EncodingDB$tuple_unpack_1__element_5 = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_EncodingDB$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "oooooNNNNNNNN";
                exception_lineno = 31;
                goto try_except_handler_5;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "oooooNNNNNNNN";
        exception_lineno = 31;
        goto try_except_handler_5;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_EncodingDB$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_EncodingDB$tuple_unpack_1__source_iter );
    tmp_EncodingDB$tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_EncodingDB$tuple_unpack_1__element_1 );
    tmp_EncodingDB$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_EncodingDB$tuple_unpack_1__element_2 );
    tmp_EncodingDB$tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_EncodingDB$tuple_unpack_1__element_3 );
    tmp_EncodingDB$tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_EncodingDB$tuple_unpack_1__element_4 );
    tmp_EncodingDB$tuple_unpack_1__element_4 = NULL;

    Py_XDECREF( tmp_EncodingDB$tuple_unpack_1__element_5 );
    tmp_EncodingDB$tuple_unpack_1__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_EncodingDB$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_EncodingDB$tuple_unpack_1__source_iter );
    tmp_EncodingDB$tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_24 = tmp_EncodingDB$tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_24 );
    {
        PyObject *old = outline_0_var_name;
        outline_0_var_name = tmp_assign_source_24;
        Py_INCREF( outline_0_var_name );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_EncodingDB$tuple_unpack_1__element_1 );
    tmp_EncodingDB$tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_25 = tmp_EncodingDB$tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_25 );
    {
        PyObject *old = outline_0_var_std;
        outline_0_var_std = tmp_assign_source_25;
        Py_INCREF( outline_0_var_std );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_EncodingDB$tuple_unpack_1__element_2 );
    tmp_EncodingDB$tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_26 = tmp_EncodingDB$tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_26 );
    {
        PyObject *old = outline_0_var_mac;
        outline_0_var_mac = tmp_assign_source_26;
        Py_INCREF( outline_0_var_mac );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_EncodingDB$tuple_unpack_1__element_3 );
    tmp_EncodingDB$tuple_unpack_1__element_3 = NULL;

    tmp_assign_source_27 = tmp_EncodingDB$tuple_unpack_1__element_4;

    CHECK_OBJECT( tmp_assign_source_27 );
    {
        PyObject *old = outline_0_var_win;
        outline_0_var_win = tmp_assign_source_27;
        Py_INCREF( outline_0_var_win );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_EncodingDB$tuple_unpack_1__element_4 );
    tmp_EncodingDB$tuple_unpack_1__element_4 = NULL;

    tmp_assign_source_28 = tmp_EncodingDB$tuple_unpack_1__element_5;

    CHECK_OBJECT( tmp_assign_source_28 );
    {
        PyObject *old = outline_0_var_pdf;
        outline_0_var_pdf = tmp_assign_source_28;
        Py_INCREF( outline_0_var_pdf );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_EncodingDB$tuple_unpack_1__element_5 );
    tmp_EncodingDB$tuple_unpack_1__element_5 = NULL;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_name2unicode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name2unicode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "name2unicode" );
        exception_tb = NULL;

        exception_lineno = 32;
        type_description_2 = "ooooooooooNNN";
        goto try_except_handler_3;
    }

    tmp_args_element_name_1 = outline_0_var_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_2 = "ooooooooooNNN";
        goto try_except_handler_3;
    }
    {
        PyObject *old = outline_0_var_c;
        outline_0_var_c = tmp_assign_source_29;
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = outline_0_var_std;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_2 = "oooooooooooNN";
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = outline_0_var_c;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = outline_0_var_std2unicode;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = outline_0_var_std;

    CHECK_OBJECT( tmp_dictset_key );
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_2 = "oooooooooooNN";
        goto try_except_handler_3;
    }
    branch_no_1:;
    tmp_cond_value_2 = outline_0_var_mac;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_2 = "oooooooooooNN";
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictset_value = outline_0_var_c;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = outline_0_var_mac2unicode;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = outline_0_var_mac;

    CHECK_OBJECT( tmp_dictset_key );
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_2 = "oooooooooooNN";
        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_cond_value_3 = outline_0_var_win;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_2 = "oooooooooooNN";
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictset_value = outline_0_var_c;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = outline_0_var_win2unicode;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = outline_0_var_win;

    CHECK_OBJECT( tmp_dictset_key );
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_2 = "oooooooooooNN";
        goto try_except_handler_3;
    }
    branch_no_3:;
    tmp_cond_value_4 = outline_0_var_pdf;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_2 = "oooooooooooNN";
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictset_value = outline_0_var_c;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = outline_0_var_pdf2unicode;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = outline_0_var_pdf;

    CHECK_OBJECT( tmp_dictset_key );
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_2 = "oooooooooooNN";
        goto try_except_handler_3;
    }
    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_2 = "oooooooooooNN";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_EncodingDB$for_loop_1__iter_value );
    tmp_EncodingDB$for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_EncodingDB$for_loop_1__for_iterator );
    Py_DECREF( tmp_EncodingDB$for_loop_1__for_iterator );
    tmp_EncodingDB$for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_2;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_EncodingDB$for_loop_1__iter_value );
    tmp_EncodingDB$for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_EncodingDB$for_loop_1__for_iterator );
    Py_DECREF( tmp_EncodingDB$for_loop_1__for_iterator );
    tmp_EncodingDB$for_loop_1__for_iterator = NULL;

    tmp_assign_source_30 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = outline_0_var_std2unicode;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_StandardEncoding;
    tmp_res = PyDict_SetItem( tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = outline_0_var_mac2unicode;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_MacRomanEncoding;
    tmp_res = PyDict_SetItem( tmp_assign_source_30, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = outline_0_var_win2unicode;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_WinAnsiEncoding;
    tmp_res = PyDict_SetItem( tmp_assign_source_30, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_0_var_pdf2unicode;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_PDFDocEncoding;
    tmp_res = PyDict_SetItem( tmp_assign_source_30, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    assert( outline_0_var_encodings == NULL );
    outline_0_var_encodings = tmp_assign_source_30;

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_classmethod_arg_1 = MAKE_FUNCTION_pdfminer$encodingdb$$$function_2_get_encoding( tmp_defaults_1 );
    tmp_assign_source_31 = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
    Py_DECREF( tmp_classmethod_arg_1 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_2 = "ooooooooooooN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_get_encoding == NULL );
    outline_0_var_get_encoding = tmp_assign_source_31;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2,
        type_description_2,
        outline_0_var___module__,
        outline_0_var_std2unicode,
        outline_0_var_mac2unicode,
        outline_0_var_win2unicode,
        outline_0_var_pdf2unicode,
        outline_0_var_name,
        outline_0_var_std,
        outline_0_var_mac,
        outline_0_var_win,
        outline_0_var_pdf,
        outline_0_var_c,
        outline_0_var_encodings,
        outline_0_var_get_encoding
    );


    // Release cached frame.
    if ( frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2 == cache_frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2 )
    {
        Py_DECREF( frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2 );
    }
    cache_frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2 = NULL;

    assertFrameObject( frame_e1a5f7bbf2af7a2301e5bf9c0224250e_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_2;
    skip_nested_handling_1:;
    tmp_outline_return_value_1 = PyDict_New();
    if ( outline_0_var___module__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___module__,
            outline_0_var___module__
        );

        assert( res == 0 );
    }

    if ( outline_0_var_std2unicode != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain_std2unicode,
            outline_0_var_std2unicode
        );

        assert( res == 0 );
    }

    if ( outline_0_var_mac2unicode != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain_mac2unicode,
            outline_0_var_mac2unicode
        );

        assert( res == 0 );
    }

    if ( outline_0_var_win2unicode != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain_win2unicode,
            outline_0_var_win2unicode
        );

        assert( res == 0 );
    }

    if ( outline_0_var_pdf2unicode != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain_pdf2unicode,
            outline_0_var_pdf2unicode
        );

        assert( res == 0 );
    }

    if ( outline_0_var_name != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain_name,
            outline_0_var_name
        );

        assert( res == 0 );
    }

    if ( outline_0_var_std != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain_std,
            outline_0_var_std
        );

        assert( res == 0 );
    }

    if ( outline_0_var_mac != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain_mac,
            outline_0_var_mac
        );

        assert( res == 0 );
    }

    if ( outline_0_var_win != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain_win,
            outline_0_var_win
        );

        assert( res == 0 );
    }

    if ( outline_0_var_pdf != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain_pdf,
            outline_0_var_pdf
        );

        assert( res == 0 );
    }

    if ( outline_0_var_c != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain_c,
            outline_0_var_c
        );

        assert( res == 0 );
    }

    if ( outline_0_var_encodings != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain_encodings,
            outline_0_var_encodings
        );

        assert( res == 0 );
    }

    if ( outline_0_var_get_encoding != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain_get_encoding,
            outline_0_var_get_encoding
        );

        assert( res == 0 );
    }

    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$encodingdb );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_std2unicode );
    Py_DECREF( outline_0_var_std2unicode );
    outline_0_var_std2unicode = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_mac2unicode );
    Py_DECREF( outline_0_var_mac2unicode );
    outline_0_var_mac2unicode = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_win2unicode );
    Py_DECREF( outline_0_var_win2unicode );
    outline_0_var_win2unicode = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_pdf2unicode );
    Py_DECREF( outline_0_var_pdf2unicode );
    outline_0_var_pdf2unicode = NULL;

    Py_XDECREF( outline_0_var_name );
    outline_0_var_name = NULL;

    Py_XDECREF( outline_0_var_std );
    outline_0_var_std = NULL;

    Py_XDECREF( outline_0_var_mac );
    outline_0_var_mac = NULL;

    Py_XDECREF( outline_0_var_win );
    outline_0_var_win = NULL;

    Py_XDECREF( outline_0_var_pdf );
    outline_0_var_pdf = NULL;

    Py_XDECREF( outline_0_var_c );
    outline_0_var_c = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_encodings );
    Py_DECREF( outline_0_var_encodings );
    outline_0_var_encodings = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_get_encoding );
    Py_DECREF( outline_0_var_get_encoding );
    outline_0_var_get_encoding = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_std2unicode );
    Py_DECREF( outline_0_var_std2unicode );
    outline_0_var_std2unicode = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_mac2unicode );
    Py_DECREF( outline_0_var_mac2unicode );
    outline_0_var_mac2unicode = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_win2unicode );
    Py_DECREF( outline_0_var_win2unicode );
    outline_0_var_win2unicode = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_pdf2unicode );
    Py_DECREF( outline_0_var_pdf2unicode );
    outline_0_var_pdf2unicode = NULL;

    Py_XDECREF( outline_0_var_name );
    outline_0_var_name = NULL;

    Py_XDECREF( outline_0_var_std );
    outline_0_var_std = NULL;

    Py_XDECREF( outline_0_var_mac );
    outline_0_var_mac = NULL;

    Py_XDECREF( outline_0_var_win );
    outline_0_var_win = NULL;

    Py_XDECREF( outline_0_var_pdf );
    outline_0_var_pdf = NULL;

    Py_XDECREF( outline_0_var_c );
    outline_0_var_c = NULL;

    Py_XDECREF( outline_0_var_encodings );
    outline_0_var_encodings = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$encodingdb );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 25;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_10 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_10;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = const_str_plain___metaclass__;
    tmp_assign_source_32 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_32 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_32 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_32;

    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_2 = const_str_plain_EncodingDB;
    tmp_args_element_name_3 = const_tuple_type_object_tuple;
    tmp_args_element_name_4 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_4c0d10bd34d9fa897be469f8e2c235c9->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_33;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c0d10bd34d9fa897be469f8e2c235c9 );
#endif
    popFrameStack();

    assertFrameObject( frame_4c0d10bd34d9fa897be469f8e2c235c9 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c0d10bd34d9fa897be469f8e2c235c9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c0d10bd34d9fa897be469f8e2c235c9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c0d10bd34d9fa897be469f8e2c235c9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c0d10bd34d9fa897be469f8e2c235c9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    tmp_assign_source_34 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_34 );
    UPDATE_STRING_DICT0( moduledict_pdfminer$encodingdb, (Nuitka_StringObject *)const_str_plain_EncodingDB, tmp_assign_source_34 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_pdfminer$encodingdb );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
