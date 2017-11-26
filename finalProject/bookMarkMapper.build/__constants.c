
#include "nuitka/prelude.h"

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *const_int_0;
PyObject *const_int_neg_1;
PyObject *const_int_neg_2;
PyObject *const_int_pos_1;
PyObject *const_int_pos_2;
PyObject *const_int_pos_3;
PyObject *const_int_pos_4;
PyObject *const_int_pos_5;
PyObject *const_int_pos_8;
PyObject *const_int_pos_9;
PyObject *const_str_chr_9;
PyObject *const_str_empty;
PyObject *const_str_space;
PyObject *const_dict_empty;
PyObject *const_int_pos_10;
PyObject *const_int_pos_15;
PyObject *const_int_pos_16;
PyObject *const_int_pos_20;
PyObject *const_str_chr_13;
PyObject *const_str_chr_37;
PyObject *const_str_chr_60;
PyObject *const_str_chr_62;
PyObject *const_int_pos_256;
PyObject *const_str_newline;
PyObject *const_str_plain_0;
PyObject *const_str_plain_a;
PyObject *const_str_plain_b;
PyObject *const_str_plain_c;
PyObject *const_str_plain_e;
PyObject *const_str_plain_f;
PyObject *const_str_plain_i;
PyObject *const_str_plain_m;
PyObject *const_str_plain_p;
PyObject *const_str_plain_s;
PyObject *const_str_plain_t;
PyObject *const_str_plain_x;
PyObject *const_tuple_empty;
PyObject *const_str_plain_rb;
PyObject *const_str_plain_re;
PyObject *const_str_plain_get;
PyObject *const_str_plain_int;
PyObject *const_str_plain_key;
PyObject *const_str_plain_len;
PyObject *const_str_plain_obj;
PyObject *const_str_plain_pdf;
PyObject *const_str_plain_row;
PyObject *const_str_plain_sum;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_tmp;
PyObject *const_str_plain_tok;
PyObject *const_str_plain_txt;
PyObject *const_unicode_empty;
PyObject *const_str_plain_args;
PyObject *const_str_plain_attr;
PyObject *const_str_plain_char;
PyObject *const_str_plain_data;
PyObject *const_str_plain_find;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_keys;
PyObject *const_str_plain_long;
PyObject *const_str_plain_name;
PyObject *const_str_plain_node;
PyObject *const_str_plain_open;
PyObject *const_str_plain_page;
PyObject *const_str_plain_path;
PyObject *const_str_plain_peek;
PyObject *const_str_plain_read;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_seek;
PyObject *const_str_plain_self;
PyObject *const_str_plain_site;
PyObject *const_str_plain_tell;
PyObject *const_str_plain_text;
PyObject *const_str_plain_type;
PyObject *const_str_plain__data;
PyObject *const_str_plain_group;
PyObject *const_str_plain_idnum;
PyObject *const_str_plain_index;
PyObject *const_str_plain_items;
PyObject *const_str_plain_level;
PyObject *const_str_plain_match;
PyObject *const_str_plain_pages;
PyObject *const_str_plain_pyPdf;
PyObject *const_str_plain_range;
PyObject *const_str_plain_split;
PyObject *const_str_plain_title;
PyObject *const_str_plain_utils;
PyObject *const_str_plain_value;
PyObject *const_str_plain_write;
PyObject *const_str_angle_lambda;
PyObject *const_str_plain_append;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_encode;
PyObject *const_str_plain_format;
PyObject *const_str_plain_insert;
PyObject *const_str_plain_length;
PyObject *const_str_plain_locals;
PyObject *const_str_plain_retval;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_update;
PyObject *const_str_plain_xrange;
PyObject *const_tuple_none_tuple;
PyObject *const_tuple_true_tuple;
PyObject *const_str_plain_Decimal;
PyObject *const_str_plain___all__;
PyObject *const_str_plain___cmp__;
PyObject *const_str_plain___doc__;
PyObject *const_str_plain_compile;
PyObject *const_str_plain_creator;
PyObject *const_str_plain_decimal;
PyObject *const_str_plain_filters;
PyObject *const_str_plain_generic;
PyObject *const_str_plain_getData;
PyObject *const_str_plain_globals;
PyObject *const_str_plain_has_key;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain_isdigit;
PyObject *const_str_plain_isspace;
PyObject *const_str_plain_outline;
PyObject *const_str_plain_raw_get;
PyObject *const_str_plain_subject;
PyObject *const_str_plain_trailer;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_StringIO;
PyObject *const_str_plain___dict__;
PyObject *const_str_plain___exit__;
PyObject *const_str_plain___file__;
PyObject *const_str_plain___init__;
PyObject *const_str_plain___iter__;
PyObject *const_str_plain___main__;
PyObject *const_str_plain___name__;
PyObject *const_str_plain___path__;
PyObject *const_str_plain_exc_type;
PyObject *const_str_plain_fromlist;
PyObject *const_str_plain_getWidth;
PyObject *const_str_plain_getvalue;
PyObject *const_str_plain_PdfObject;
PyObject *const_str_plain___class__;
PyObject *const_str_plain___enter__;
PyObject *const_str_plain_bytearray;
PyObject *const_str_plain_cStringIO;
PyObject *const_str_plain_exc_value;
PyObject *const_str_plain_getHeight;
PyObject *const_str_plain_getObject;
PyObject *const_str_plain_NameObject;
PyObject *const_str_plain_NullObject;
PyObject *const_str_plain___author__;
PyObject *const_str_plain___import__;
PyObject *const_str_plain___module__;
PyObject *const_str_plain_generation;
PyObject *const_str_plain_readObject;
PyObject *const_str_plain_setdefault;
PyObject *const_str_plain_ArrayObject;
PyObject *const_str_plain_FlateDecode;
PyObject *const_str_plain_FloatObject;
PyObject *const_str_plain_RC4_encrypt;
PyObject *const_str_plain___delattr__;
PyObject *const_str_plain___getattr__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_plain___package__;
PyObject *const_str_plain___setattr__;
PyObject *const_str_plain___setitem__;
PyObject *const_str_plain_classmethod;
PyObject *const_str_plain_flateEncode;
PyObject *const_str_plain_getOutlines;
PyObject *const_str_plain_to_integral;
PyObject *const_str_plain_xmpMetadata;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_tuple_int_pos_4_tuple;
PyObject *const_tuple_str_space_tuple;
PyObject *const_str_plain_NumberObject;
PyObject *const_str_plain_PdfReadError;
PyObject *const_str_plain_StreamObject;
PyObject *const_str_plain___builtins__;
PyObject *const_str_plain___internal__;
PyObject *const_str_plain_staticmethod;
PyObject *const_tuple_int_pos_20_tuple;
PyObject *const_str_plain_BooleanObject;
PyObject *const_str_plain_PdfFileReader;
PyObject *const_str_plain_PdfFileWriter;
PyObject *const_str_plain___metaclass__;
PyObject *const_str_plain_exc_traceback;
PyObject *const_str_plain_writeToStream;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_tuple_str_newline_tuple;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_plain_IndirectObject;
PyObject *const_str_plain_XmpInformation;
PyObject *const_str_plain_encryption_key;
PyObject *const_str_plain_getLowerLeft_x;
PyObject *const_str_plain_getLowerLeft_y;
PyObject *const_str_plain_getXmpMetadata;
PyObject *const_str_plain_matrixMultiply;
PyObject *const_str_plain_original_bytes;
PyObject *const_str_plain_readFromStream;
PyObject *const_str_plain_RectangleObject;
PyObject *const_str_plain_getUpperRight_x;
PyObject *const_str_plain_getUpperRight_y;
PyObject *const_str_plain_ByteStringObject;
PyObject *const_str_plain_DictionaryObject;
PyObject *const_str_plain_TextStringObject;
PyObject *const_str_plain___author_email__;
PyObject *const_str_plain_decodeStreamData;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_str_plain_readNonWhitespace;
PyObject *const_str_plain_createStringObject;
PyObject *const_str_plain_DecodedStreamObject;
PyObject *const_str_plain_delimiterCharacters;
PyObject *const_str_plain_readUntilWhitespace;
PyObject *const_tuple_str_plain_StringIO_tuple;
PyObject *const_tuple_int_neg_1_int_pos_1_tuple;
PyObject *const_tuple_int_neg_2_int_pos_1_tuple;
PyObject *const_str_plain_PageSizeNotDefinedError;
PyObject *const_tuple_str_chr_13_str_newline_tuple;
PyObject *const_str_plain_ConvertFunctionsToVirtualList;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
PyObject *const_str_digest_168de11ef419dffbd799cd810eeb2b04;
PyObject *const_str_digest_1ed29c6b24d52d0678184d0454afa0ed;
PyObject *const_str_digest_250fd502c9fc8326f5f0609dc539cc9b;
PyObject *const_str_digest_25731c733fd74e8333aa29126ce85686;
PyObject *const_str_digest_2bdfd8401769d7da2b5ac336b85af694;
PyObject *const_str_digest_45e4dde2057b0bf276d6a84f4c917d27;
PyObject *const_str_digest_58961c73026e70b23b08cf381b49e04e;
PyObject *const_str_digest_5cf0452130fc4fd9d925cac8f015f9d1;
PyObject *const_str_digest_72d35405247fc182edd1a2b79b8e10e4;
PyObject *const_str_digest_753bd7b2380d653956c1268315977064;
PyObject *const_str_digest_768947c855de869e91adea3cfae5b90b;
PyObject *const_str_digest_7bb187c562694df4ba2daaaf74308c83;
PyObject *const_str_digest_7dcaf1a430fcab7fa90f6e44d3bb9d17;
PyObject *const_str_digest_90c69007edb5f95111f3acc7e5c4edb7;
PyObject *const_str_digest_9816e8d1552296af90d250823c964059;
PyObject *const_str_digest_a822494a7539472d096cd3b4426e78e7;
PyObject *const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
PyObject *const_str_digest_c2661e89ad42c9923631ca1f3926f541;
PyObject *const_tuple_str_digest_168de11ef419dffbd799cd810eeb2b04_tuple;
PyObject *const_tuple_str_digest_90c69007edb5f95111f3acc7e5c4edb7_tuple;
PyObject *const_tuple_str_plain_self_str_plain_stream_str_plain_encryption_key_tuple;

static void _createGlobalConstants( void )
{
    NUITKA_MAY_BE_UNUSED PyObject *exception_type, *exception_value;
    NUITKA_MAY_BE_UNUSED PyTracebackObject *exception_tb;

#ifdef _MSC_VER
    // Prevent unused warnings in case of simple programs, the attribute
    // NUITKA_MAY_BE_UNUSED doesn't work for MSVC.
    (void *)exception_type; (void *)exception_value; (void *)exception_tb;
#endif

    const_int_0 = PyInt_FromLong( 0l );
    const_int_neg_1 = PyInt_FromLong( -1l );
    const_int_neg_2 = PyInt_FromLong( -2l );
    const_int_pos_1 = PyInt_FromLong( 1l );
    const_int_pos_2 = PyInt_FromLong( 2l );
    const_int_pos_3 = PyInt_FromLong( 3l );
    const_int_pos_4 = PyInt_FromLong( 4l );
    const_int_pos_5 = PyInt_FromLong( 5l );
    const_int_pos_8 = PyInt_FromLong( 8l );
    const_int_pos_9 = PyInt_FromLong( 9l );
    const_str_chr_9 = UNSTREAM_CHAR( 9, 0 );
    const_str_empty = UNSTREAM_STRING( &constant_bin[ 0 ], 0, 0 );
    const_str_space = UNSTREAM_CHAR( 32, 0 );
    const_dict_empty = _PyDict_NewPresized( 0 );
    assert( PyDict_Size( const_dict_empty ) == 0 );
    const_int_pos_10 = PyInt_FromLong( 10l );
    const_int_pos_15 = PyInt_FromLong( 15l );
    const_int_pos_16 = PyInt_FromLong( 16l );
    const_int_pos_20 = PyInt_FromLong( 20l );
    const_str_chr_13 = UNSTREAM_CHAR( 13, 0 );
    const_str_chr_37 = UNSTREAM_CHAR( 37, 0 );
    const_str_chr_60 = UNSTREAM_CHAR( 60, 0 );
    const_str_chr_62 = UNSTREAM_CHAR( 62, 0 );
    const_int_pos_256 = PyInt_FromLong( 256l );
    const_str_newline = UNSTREAM_CHAR( 10, 0 );
    const_str_plain_0 = UNSTREAM_CHAR( 48, 0 );
    const_str_plain_a = UNSTREAM_CHAR( 97, 1 );
    const_str_plain_b = UNSTREAM_CHAR( 98, 1 );
    const_str_plain_c = UNSTREAM_CHAR( 99, 1 );
    const_str_plain_e = UNSTREAM_CHAR( 101, 1 );
    const_str_plain_f = UNSTREAM_CHAR( 102, 1 );
    const_str_plain_i = UNSTREAM_CHAR( 105, 1 );
    const_str_plain_m = UNSTREAM_CHAR( 109, 1 );
    const_str_plain_p = UNSTREAM_CHAR( 112, 1 );
    const_str_plain_s = UNSTREAM_CHAR( 115, 1 );
    const_str_plain_t = UNSTREAM_CHAR( 116, 1 );
    const_str_plain_x = UNSTREAM_CHAR( 120, 1 );
    const_tuple_empty = PyTuple_New( 0 );
    const_str_plain_rb = UNSTREAM_STRING( &constant_bin[ 1189 ], 2, 1 );
    const_str_plain_re = UNSTREAM_STRING( &constant_bin[ 69 ], 2, 1 );
    const_str_plain_get = UNSTREAM_STRING( &constant_bin[ 762 ], 3, 1 );
    const_str_plain_int = UNSTREAM_STRING( &constant_bin[ 99 ], 3, 1 );
    const_str_plain_key = UNSTREAM_STRING( &constant_bin[ 3445 ], 3, 1 );
    const_str_plain_len = UNSTREAM_STRING( &constant_bin[ 296 ], 3, 1 );
    const_str_plain_obj = UNSTREAM_STRING( &constant_bin[ 1350 ], 3, 1 );
    const_str_plain_pdf = UNSTREAM_STRING( &constant_bin[ 167 ], 3, 1 );
    const_str_plain_row = UNSTREAM_STRING( &constant_bin[ 293 ], 3, 1 );
    const_str_plain_sum = UNSTREAM_STRING( &constant_bin[ 11221 ], 3, 1 );
    const_str_plain_sys = UNSTREAM_STRING( &constant_bin[ 11224 ], 3, 1 );
    const_str_plain_tmp = UNSTREAM_STRING( &constant_bin[ 7571 ], 3, 1 );
    const_str_plain_tok = UNSTREAM_STRING( &constant_bin[ 1293 ], 3, 1 );
    const_str_plain_txt = UNSTREAM_STRING( &constant_bin[ 181 ], 3, 1 );
    const_unicode_empty = UNSTREAM_UNICODE( &constant_bin[ 0 ], 0 );
    const_str_plain_args = UNSTREAM_STRING( &constant_bin[ 3261 ], 4, 1 );
    const_str_plain_attr = UNSTREAM_STRING( &constant_bin[ 10699 ], 4, 1 );
    const_str_plain_char = UNSTREAM_STRING( &constant_bin[ 9230 ], 4, 1 );
    const_str_plain_data = UNSTREAM_STRING( &constant_bin[ 328 ], 4, 1 );
    const_str_plain_find = UNSTREAM_STRING( &constant_bin[ 3557 ], 4, 1 );
    const_str_plain_iter = UNSTREAM_STRING( &constant_bin[ 1138 ], 4, 1 );
    const_str_plain_keys = UNSTREAM_STRING( &constant_bin[ 11227 ], 4, 1 );
    const_str_plain_long = UNSTREAM_STRING( &constant_bin[ 11231 ], 4, 1 );
    const_str_plain_name = UNSTREAM_STRING( &constant_bin[ 187 ], 4, 1 );
    const_str_plain_node = UNSTREAM_STRING( &constant_bin[ 10982 ], 4, 1 );
    const_str_plain_open = UNSTREAM_STRING( &constant_bin[ 11235 ], 4, 1 );
    const_str_plain_page = UNSTREAM_STRING( &constant_bin[ 80 ], 4, 1 );
    const_str_plain_path = UNSTREAM_STRING( &constant_bin[ 148 ], 4, 1 );
    const_str_plain_peek = UNSTREAM_STRING( &constant_bin[ 1310 ], 4, 1 );
    const_str_plain_read = UNSTREAM_STRING( &constant_bin[ 1180 ], 4, 1 );
    const_str_plain_repr = UNSTREAM_STRING( &constant_bin[ 751 ], 4, 1 );
    const_str_plain_seek = UNSTREAM_STRING( &constant_bin[ 11239 ], 4, 1 );
    const_str_plain_self = UNSTREAM_STRING( &constant_bin[ 5665 ], 4, 1 );
    const_str_plain_site = UNSTREAM_STRING( &constant_bin[ 11243 ], 4, 1 );
    const_str_plain_tell = UNSTREAM_STRING( &constant_bin[ 11247 ], 4, 1 );
    const_str_plain_text = UNSTREAM_STRING( &constant_bin[ 3310 ], 4, 1 );
    const_str_plain_type = UNSTREAM_STRING( &constant_bin[ 7460 ], 4, 1 );
    const_str_plain__data = UNSTREAM_STRING( &constant_bin[ 11251 ], 5, 1 );
    const_str_plain_group = UNSTREAM_STRING( &constant_bin[ 11256 ], 5, 1 );
    const_str_plain_idnum = UNSTREAM_STRING( &constant_bin[ 6212 ], 5, 1 );
    const_str_plain_index = UNSTREAM_STRING( &constant_bin[ 9251 ], 5, 1 );
    const_str_plain_items = UNSTREAM_STRING( &constant_bin[ 1142 ], 5, 1 );
    const_str_plain_level = UNSTREAM_STRING( &constant_bin[ 11261 ], 5, 1 );
    const_str_plain_match = UNSTREAM_STRING( &constant_bin[ 11266 ], 5, 1 );
    const_str_plain_pages = UNSTREAM_STRING( &constant_bin[ 80 ], 5, 1 );
    const_str_plain_pyPdf = UNSTREAM_STRING( &constant_bin[ 215 ], 5, 1 );
    const_str_plain_range = UNSTREAM_STRING( &constant_bin[ 9264 ], 5, 1 );
    const_str_plain_split = UNSTREAM_STRING( &constant_bin[ 6809 ], 5, 1 );
    const_str_plain_title = UNSTREAM_STRING( &constant_bin[ 8344 ], 5, 1 );
    const_str_plain_utils = UNSTREAM_STRING( &constant_bin[ 9286 ], 5, 1 );
    const_str_plain_value = UNSTREAM_STRING( &constant_bin[ 3211 ], 5, 1 );
    const_str_plain_write = UNSTREAM_STRING( &constant_bin[ 9435 ], 5, 1 );
    const_str_angle_lambda = UNSTREAM_STRING( &constant_bin[ 11271 ], 8, 0 );
    const_str_plain_append = UNSTREAM_STRING( &constant_bin[ 11279 ], 6, 1 );
    const_str_plain_decode = UNSTREAM_STRING( &constant_bin[ 342 ], 6, 1 );
    const_str_plain_encode = UNSTREAM_STRING( &constant_bin[ 3668 ], 6, 1 );
    const_str_plain_format = UNSTREAM_STRING( &constant_bin[ 3633 ], 6, 1 );
    const_str_plain_insert = UNSTREAM_STRING( &constant_bin[ 5489 ], 6, 1 );
    const_str_plain_length = UNSTREAM_STRING( &constant_bin[ 296 ], 6, 1 );
    const_str_plain_locals = UNSTREAM_STRING( &constant_bin[ 11285 ], 6, 1 );
    const_str_plain_retval = UNSTREAM_STRING( &constant_bin[ 6104 ], 6, 1 );
    const_str_plain_stream = UNSTREAM_STRING( &constant_bin[ 487 ], 6, 1 );
    const_str_plain_update = UNSTREAM_STRING( &constant_bin[ 11291 ], 6, 1 );
    const_str_plain_xrange = UNSTREAM_STRING( &constant_bin[ 11297 ], 6, 1 );
    const_tuple_none_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    const_tuple_true_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_true_tuple, 0, Py_True ); Py_INCREF( Py_True );
    const_str_plain_Decimal = UNSTREAM_STRING( &constant_bin[ 11303 ], 7, 1 );
    const_str_plain___all__ = UNSTREAM_STRING( &constant_bin[ 11310 ], 7, 1 );
    const_str_plain___cmp__ = UNSTREAM_STRING( &constant_bin[ 11317 ], 7, 1 );
    const_str_plain___doc__ = UNSTREAM_STRING( &constant_bin[ 11324 ], 7, 1 );
    const_str_plain_compile = UNSTREAM_STRING( &constant_bin[ 11331 ], 7, 1 );
    const_str_plain_creator = UNSTREAM_STRING( &constant_bin[ 7783 ], 7, 1 );
    const_str_plain_decimal = UNSTREAM_STRING( &constant_bin[ 11338 ], 7, 1 );
    const_str_plain_filters = UNSTREAM_STRING( &constant_bin[ 365 ], 7, 1 );
    const_str_plain_generic = UNSTREAM_STRING( &constant_bin[ 1338 ], 7, 1 );
    const_str_plain_getData = UNSTREAM_STRING( &constant_bin[ 4804 ], 7, 1 );
    const_str_plain_globals = UNSTREAM_STRING( &constant_bin[ 11345 ], 7, 1 );
    const_str_plain_has_key = UNSTREAM_STRING( &constant_bin[ 11352 ], 7, 1 );
    const_str_plain_inspect = UNSTREAM_STRING( &constant_bin[ 11359 ], 7, 1 );
    const_str_plain_isdigit = UNSTREAM_STRING( &constant_bin[ 11366 ], 7, 1 );
    const_str_plain_isspace = UNSTREAM_STRING( &constant_bin[ 11373 ], 7, 1 );
    const_str_plain_outline = UNSTREAM_STRING( &constant_bin[ 7587 ], 7, 1 );
    const_str_plain_raw_get = UNSTREAM_STRING( &constant_bin[ 11380 ], 7, 1 );
    const_str_plain_subject = UNSTREAM_STRING( &constant_bin[ 8353 ], 7, 1 );
    const_str_plain_trailer = UNSTREAM_STRING( &constant_bin[ 7319 ], 7, 1 );
    const_tuple_false_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_false_tuple, 0, Py_False ); Py_INCREF( Py_False );
    const_tuple_int_0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_0_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_StringIO = UNSTREAM_STRING( &constant_bin[ 11387 ], 8, 1 );
    const_str_plain___dict__ = UNSTREAM_STRING( &constant_bin[ 11395 ], 8, 1 );
    const_str_plain___exit__ = UNSTREAM_STRING( &constant_bin[ 11403 ], 8, 1 );
    const_str_plain___file__ = UNSTREAM_STRING( &constant_bin[ 11411 ], 8, 1 );
    const_str_plain___init__ = UNSTREAM_STRING( &constant_bin[ 247 ], 8, 1 );
    const_str_plain___iter__ = UNSTREAM_STRING( &constant_bin[ 11419 ], 8, 1 );
    const_str_plain___main__ = UNSTREAM_STRING( &constant_bin[ 11427 ], 8, 1 );
    const_str_plain___name__ = UNSTREAM_STRING( &constant_bin[ 11435 ], 8, 1 );
    const_str_plain___path__ = UNSTREAM_STRING( &constant_bin[ 11443 ], 8, 1 );
    const_str_plain_exc_type = UNSTREAM_STRING( &constant_bin[ 11451 ], 8, 1 );
    const_str_plain_fromlist = UNSTREAM_STRING( &constant_bin[ 11459 ], 8, 1 );
    const_str_plain_getWidth = UNSTREAM_STRING( &constant_bin[ 1058 ], 8, 1 );
    const_str_plain_getvalue = UNSTREAM_STRING( &constant_bin[ 11467 ], 8, 1 );
    const_str_plain_PdfObject = UNSTREAM_STRING( &constant_bin[ 3225 ], 9, 1 );
    const_str_plain___class__ = UNSTREAM_STRING( &constant_bin[ 11475 ], 9, 1 );
    const_str_plain___enter__ = UNSTREAM_STRING( &constant_bin[ 11484 ], 9, 1 );
    const_str_plain_bytearray = UNSTREAM_STRING( &constant_bin[ 11493 ], 9, 1 );
    const_str_plain_cStringIO = UNSTREAM_STRING( &constant_bin[ 11502 ], 9, 1 );
    const_str_plain_exc_value = UNSTREAM_STRING( &constant_bin[ 11511 ], 9, 1 );
    const_str_plain_getHeight = UNSTREAM_STRING( &constant_bin[ 1071 ], 9, 1 );
    const_str_plain_getObject = UNSTREAM_STRING( &constant_bin[ 8131 ], 9, 1 );
    const_str_plain_NameObject = UNSTREAM_STRING( &constant_bin[ 11520 ], 10, 1 );
    const_str_plain_NullObject = UNSTREAM_STRING( &constant_bin[ 11530 ], 10, 1 );
    const_str_plain___author__ = UNSTREAM_STRING( &constant_bin[ 11540 ], 10, 1 );
    const_str_plain___import__ = UNSTREAM_STRING( &constant_bin[ 11550 ], 10, 1 );
    const_str_plain___module__ = UNSTREAM_STRING( &constant_bin[ 702 ], 10, 1 );
    const_str_plain_generation = UNSTREAM_STRING( &constant_bin[ 6222 ], 10, 1 );
    const_str_plain_readObject = UNSTREAM_STRING( &constant_bin[ 6025 ], 10, 1 );
    const_str_plain_setdefault = UNSTREAM_STRING( &constant_bin[ 11560 ], 10, 1 );
    const_str_plain_ArrayObject = UNSTREAM_STRING( &constant_bin[ 11570 ], 11, 1 );
    const_str_plain_FlateDecode = UNSTREAM_STRING( &constant_bin[ 11581 ], 11, 1 );
    const_str_plain_FloatObject = UNSTREAM_STRING( &constant_bin[ 11592 ], 11, 1 );
    const_str_plain_RC4_encrypt = UNSTREAM_STRING( &constant_bin[ 11603 ], 11, 1 );
    const_str_plain___delattr__ = UNSTREAM_STRING( &constant_bin[ 11614 ], 11, 1 );
    const_str_plain___getattr__ = UNSTREAM_STRING( &constant_bin[ 11625 ], 11, 1 );
    const_str_plain___getitem__ = UNSTREAM_STRING( &constant_bin[ 11636 ], 11, 1 );
    const_str_plain___package__ = UNSTREAM_STRING( &constant_bin[ 11647 ], 11, 1 );
    const_str_plain___setattr__ = UNSTREAM_STRING( &constant_bin[ 11658 ], 11, 1 );
    const_str_plain___setitem__ = UNSTREAM_STRING( &constant_bin[ 11669 ], 11, 1 );
    const_str_plain_classmethod = UNSTREAM_STRING( &constant_bin[ 11680 ], 11, 1 );
    const_str_plain_flateEncode = UNSTREAM_STRING( &constant_bin[ 11691 ], 11, 1 );
    const_str_plain_getOutlines = UNSTREAM_STRING( &constant_bin[ 8052 ], 11, 1 );
    const_str_plain_to_integral = UNSTREAM_STRING( &constant_bin[ 11702 ], 11, 1 );
    const_str_plain_xmpMetadata = UNSTREAM_STRING( &constant_bin[ 7935 ], 11, 1 );
    const_tuple_int_pos_1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_tuple, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_int_pos_4_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_4_tuple, 0, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_tuple_str_space_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_space_tuple, 0, const_str_space ); Py_INCREF( const_str_space );
    const_str_plain_NumberObject = UNSTREAM_STRING( &constant_bin[ 11713 ], 12, 1 );
    const_str_plain_PdfReadError = UNSTREAM_STRING( &constant_bin[ 11725 ], 12, 1 );
    const_str_plain_StreamObject = UNSTREAM_STRING( &constant_bin[ 3356 ], 12, 1 );
    const_str_plain___builtins__ = UNSTREAM_STRING( &constant_bin[ 11737 ], 12, 1 );
    const_str_plain___internal__ = UNSTREAM_STRING( &constant_bin[ 11749 ], 12, 1 );
    const_str_plain_staticmethod = UNSTREAM_STRING( &constant_bin[ 11761 ], 12, 1 );
    const_tuple_int_pos_20_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_20_tuple, 0, const_int_pos_20 ); Py_INCREF( const_int_pos_20 );
    const_str_plain_BooleanObject = UNSTREAM_STRING( &constant_bin[ 11773 ], 13, 1 );
    const_str_plain_PdfFileReader = UNSTREAM_STRING( &constant_bin[ 11786 ], 13, 1 );
    const_str_plain_PdfFileWriter = UNSTREAM_STRING( &constant_bin[ 11799 ], 13, 1 );
    const_str_plain___metaclass__ = UNSTREAM_STRING( &constant_bin[ 11812 ], 13, 1 );
    const_str_plain_exc_traceback = UNSTREAM_STRING( &constant_bin[ 11825 ], 13, 1 );
    const_str_plain_writeToStream = UNSTREAM_STRING( &constant_bin[ 9435 ], 13, 1 );
    const_tuple_int_0_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_str_newline_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_newline_tuple, 0, const_str_newline ); Py_INCREF( const_str_newline );
    const_tuple_type_object_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_type_object_tuple, 0, (PyObject *)&PyBaseObject_Type ); Py_INCREF( (PyObject *)&PyBaseObject_Type );
    const_str_plain_IndirectObject = UNSTREAM_STRING( &constant_bin[ 3911 ], 14, 1 );
    const_str_plain_XmpInformation = UNSTREAM_STRING( &constant_bin[ 11838 ], 14, 1 );
    const_str_plain_encryption_key = UNSTREAM_STRING( &constant_bin[ 11852 ], 14, 1 );
    const_str_plain_getLowerLeft_x = UNSTREAM_STRING( &constant_bin[ 762 ], 14, 1 );
    const_str_plain_getLowerLeft_y = UNSTREAM_STRING( &constant_bin[ 781 ], 14, 1 );
    const_str_plain_getXmpMetadata = UNSTREAM_STRING( &constant_bin[ 7916 ], 14, 1 );
    const_str_plain_matrixMultiply = UNSTREAM_STRING( &constant_bin[ 11866 ], 14, 1 );
    const_str_plain_original_bytes = UNSTREAM_STRING( &constant_bin[ 3155 ], 14, 1 );
    const_str_plain_readFromStream = UNSTREAM_STRING( &constant_bin[ 11880 ], 14, 1 );
    const_str_plain_RectangleObject = UNSTREAM_STRING( &constant_bin[ 3823 ], 15, 1 );
    const_str_plain_getUpperRight_x = UNSTREAM_STRING( &constant_bin[ 800 ], 15, 1 );
    const_str_plain_getUpperRight_y = UNSTREAM_STRING( &constant_bin[ 820 ], 15, 1 );
    const_str_plain_ByteStringObject = UNSTREAM_STRING( &constant_bin[ 11894 ], 16, 1 );
    const_str_plain_DictionaryObject = UNSTREAM_STRING( &constant_bin[ 11910 ], 16, 1 );
    const_str_plain_TextStringObject = UNSTREAM_STRING( &constant_bin[ 11926 ], 16, 1 );
    const_str_plain___author_email__ = UNSTREAM_STRING( &constant_bin[ 11942 ], 16, 1 );
    const_str_plain_decodeStreamData = UNSTREAM_STRING( &constant_bin[ 11958 ], 16, 1 );
    const_tuple_none_none_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_self_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_readNonWhitespace = UNSTREAM_STRING( &constant_bin[ 11974 ], 17, 1 );
    const_str_plain_createStringObject = UNSTREAM_STRING( &constant_bin[ 1201 ], 18, 1 );
    const_str_plain_DecodedStreamObject = UNSTREAM_STRING( &constant_bin[ 11991 ], 19, 1 );
    const_str_plain_delimiterCharacters = UNSTREAM_STRING( &constant_bin[ 12010 ], 19, 1 );
    const_str_plain_readUntilWhitespace = UNSTREAM_STRING( &constant_bin[ 12029 ], 19, 1 );
    const_tuple_str_plain_StringIO_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_StringIO_tuple, 0, const_str_plain_StringIO ); Py_INCREF( const_str_plain_StringIO );
    const_tuple_int_neg_1_int_pos_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_int_pos_1_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_int_neg_2_int_pos_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_neg_2_int_pos_1_tuple, 0, const_int_neg_2 ); Py_INCREF( const_int_neg_2 );
    PyTuple_SET_ITEM( const_tuple_int_neg_2_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_plain_PageSizeNotDefinedError = UNSTREAM_STRING( &constant_bin[ 12048 ], 23, 1 );
    const_tuple_str_chr_13_str_newline_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_chr_13_str_newline_tuple, 0, const_str_chr_13 ); Py_INCREF( const_str_chr_13 );
    PyTuple_SET_ITEM( const_tuple_str_chr_13_str_newline_tuple, 1, const_str_newline ); Py_INCREF( const_str_newline );
    const_str_plain_ConvertFunctionsToVirtualList = UNSTREAM_STRING( &constant_bin[ 12071 ], 29, 1 );
    const_tuple_str_plain_self_str_plain_value_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_168de11ef419dffbd799cd810eeb2b04 = UNSTREAM_STRING( &constant_bin[ 12100 ], 7, 0 );
    const_str_digest_1ed29c6b24d52d0678184d0454afa0ed = UNSTREAM_STRING( &constant_bin[ 571 ], 5, 0 );
    const_str_digest_250fd502c9fc8326f5f0609dc539cc9b = UNSTREAM_STRING( &constant_bin[ 12107 ], 15, 0 );
    const_str_digest_25731c733fd74e8333aa29126ce85686 = UNSTREAM_STRING( &constant_bin[ 12122 ], 2, 0 );
    const_str_digest_2bdfd8401769d7da2b5ac336b85af694 = UNSTREAM_STRING( &constant_bin[ 12124 ], 6, 0 );
    const_str_digest_45e4dde2057b0bf276d6a84f4c917d27 = UNSTREAM_STRING( &constant_bin[ 1349 ], 7, 0 );
    const_str_digest_58961c73026e70b23b08cf381b49e04e = UNSTREAM_STRING( &constant_bin[ 12130 ], 15, 0 );
    const_str_digest_5cf0452130fc4fd9d925cac8f015f9d1 = UNSTREAM_STRING( &constant_bin[ 12145 ], 12, 0 );
    const_str_digest_72d35405247fc182edd1a2b79b8e10e4 = UNSTREAM_STRING( &constant_bin[ 12157 ], 12, 0 );
    const_str_digest_753bd7b2380d653956c1268315977064 = UNSTREAM_STRING( &constant_bin[ 12169 ], 26, 0 );
    const_str_digest_768947c855de869e91adea3cfae5b90b = UNSTREAM_STRING( &constant_bin[ 12195 ], 5, 0 );
    const_str_digest_7bb187c562694df4ba2daaaf74308c83 = UNSTREAM_STRING( &constant_bin[ 12200 ], 9, 0 );
    const_str_digest_7dcaf1a430fcab7fa90f6e44d3bb9d17 = UNSTREAM_STRING( &constant_bin[ 12209 ], 12, 0 );
    const_str_digest_90c69007edb5f95111f3acc7e5c4edb7 = UNSTREAM_STRING( &constant_bin[ 12221 ], 7, 0 );
    const_str_digest_9816e8d1552296af90d250823c964059 = UNSTREAM_STRING( &constant_bin[ 12228 ], 46, 0 );
    const_str_digest_a822494a7539472d096cd3b4426e78e7 = UNSTREAM_STRING( &constant_bin[ 12124 ], 5, 0 );
    const_str_digest_adc474dd61fbd736d69c1bac5d9712e0 = UNSTREAM_STRING( &constant_bin[ 12274 ], 47, 0 );
    const_str_digest_c2661e89ad42c9923631ca1f3926f541 = UNSTREAM_STRING( &constant_bin[ 12321 ], 5, 0 );
    const_tuple_str_digest_168de11ef419dffbd799cd810eeb2b04_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_168de11ef419dffbd799cd810eeb2b04_tuple, 0, const_str_digest_168de11ef419dffbd799cd810eeb2b04 ); Py_INCREF( const_str_digest_168de11ef419dffbd799cd810eeb2b04 );
    const_tuple_str_digest_90c69007edb5f95111f3acc7e5c4edb7_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_90c69007edb5f95111f3acc7e5c4edb7_tuple, 0, const_str_digest_90c69007edb5f95111f3acc7e5c4edb7 ); Py_INCREF( const_str_digest_90c69007edb5f95111f3acc7e5c4edb7 );
    const_tuple_str_plain_self_str_plain_stream_str_plain_encryption_key_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_stream_str_plain_encryption_key_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_stream_str_plain_encryption_key_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_stream_str_plain_encryption_key_tuple, 2, const_str_plain_encryption_key ); Py_INCREF( const_str_plain_encryption_key );

#if _NUITKA_EXE
    /* Set the "sys.executable" path to the original CPython executable. */
    PySys_SetObject(
        (char *)"executable",
        const_str_digest_58961c73026e70b23b08cf381b49e04e
    );
#endif
}

// In debug mode we can check that the constants were not tampered with in any
// given moment. We typically do it at program exit, but we can add extra calls
// for sanity.
#ifndef __NUITKA_NO_ASSERT__
void checkGlobalConstants( void )
{

}
#endif

void createGlobalConstants( void )
{
    if ( _sentinel_value == NULL )
    {
#if PYTHON_VERSION < 300
        _sentinel_value = PyCObject_FromVoidPtr( NULL, NULL );
#else
        // The NULL value is not allowed for a capsule, so use something else.
        _sentinel_value = PyCapsule_New( (void *)27, "sentinel", NULL );
#endif
        assert( _sentinel_value );

        _createGlobalConstants();
    }
}
