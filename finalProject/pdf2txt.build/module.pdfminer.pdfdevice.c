/* Generated code for Python source for module 'pdfminer.pdfdevice'
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

/* The _module_pdfminer$pdfdevice is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pdfminer$pdfdevice;
PyDictObject *moduledict_pdfminer$pdfdevice;

/* The module constants used, if any. */
extern PyObject *const_str_plain_evenodd;
extern PyObject *const_tuple_str_plain_self_str_plain_tag_tuple;
extern PyObject *const_str_plain_bbox2str;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_end_tag;
extern PyObject *const_str_plain_mediabox;
extern PyObject *const_str_plain_iteritems;
extern PyObject *const_str_plain_decode;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_plain_self_str_plain_textstate_str_plain_seq_tuple;
static PyObject *const_str_digest_f5df4ba3e251e2b438e99f758d54c5f4;
extern PyObject *const_str_plain_props;
static PyObject *const_tuple_str_plain_self_str_plain_rsrcmgr_tuple;
extern PyObject *const_str_plain__stack;
static PyObject *const_tuple_1caa1ad6e4f1df715be3f00d8c98d241_tuple;
extern PyObject *const_str_plain_stream;
extern PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_stream_tuple;
extern PyObject *const_str_plain___repr__;
static PyObject *const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple;
extern PyObject *const_str_digest_00b407740d742ef21d6f97842b0811ea;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_do_tag;
extern PyObject *const_str_plain_ctm;
extern PyObject *const_str_plain_TagExtractor;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_mult_matrix;
extern PyObject *const_str_plain_is_multibyte;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_PDFDevice;
static PyObject *const_str_digest_59206c0999664f01bcd3241544700ca3;
extern PyObject *const_str_plain_to_unichr;
static PyObject *const_str_plain_dxscale;
extern PyObject *const_str_plain_scaling;
extern PyObject *const_str_plain_begin_page;
extern PyObject *const_tuple_str_plain_enc_tuple;
static PyObject *const_str_plain_chars;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_render_char;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_sorted;
extern PyObject *const_str_plain_textstate;
static PyObject *const_str_angle_PDFDevice;
extern PyObject *const_str_plain_codec;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_rise;
extern PyObject *const_str_plain_is_vertical;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_wordspace;
extern PyObject *const_str_plain_tag;
extern PyObject *const_str_plain_font;
extern PyObject *const_str_plain_PDFUnicodeNotDefined;
static PyObject *const_tuple_dca68afbaf4123e4221f4c9cc2e51c34_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_float_0_001;
static PyObject *const_tuple_b4e0f3f686b61311c7496ed464e6ac04_tuple;
extern PyObject *const_str_plain_end_page;
extern PyObject *const_str_plain_render_image;
static PyObject *const_tuple_str_plain_translate_matrix_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_pageno;
extern PyObject *const_str_plain_fontsize;
extern PyObject *const_tuple_str_plain_mult_matrix_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_tuple_str_plain_PDFUnicodeNotDefined_tuple;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_begin_tag;
extern PyObject *const_tuple_str_plain_bbox2str_tuple;
static PyObject *const_str_plain_needcharspace;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_bbox;
extern PyObject *const_str_plain_rsrcmgr;
extern PyObject *const_str_plain_text;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_cid;
extern PyObject *const_tuple_str_digest_00b407740d742ef21d6f97842b0811ea_tuple;
extern PyObject *const_str_plain_isnumber;
extern PyObject *const_str_plain_pos;
extern PyObject *const_str_plain_paint_path;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_matrix;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_translate_matrix;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain_charspace;
extern PyObject *const_str_plain_pdffont;
extern PyObject *const_str_plain_outfp;
extern PyObject *const_tuple_str_plain_self_str_plain_ctm_tuple;
extern PyObject *const_str_plain_name;
extern PyObject *const_tuple_str_plain_self_str_plain_tag_str_plain_props_tuple;
extern PyObject *const_str_plain_seq;
extern PyObject *const_str_plain_page;
extern PyObject *const_str_plain_graphicstate;
extern PyObject *const_str_plain_begin_figure;
extern PyObject *const_str_plain_PDFTextDevice;
extern PyObject *const_str_plain_rotate;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_k;
extern PyObject *const_tuple_b0c00933e83a0151953f3a00c2178204_tuple;
static PyObject *const_str_digest_7ec1b31610a793924368c978ade2d3bd;
static PyObject *const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_s;
static PyObject *const_str_digest_5496a85b2db775d15367d5a221061371;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
extern PyObject *const_tuple_9610428a1ba6846a8d44a05bfd7779c2_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_page_str_plain_ctm_tuple;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_render_string;
static PyObject *const_tuple_str_plain_self_str_plain_tag_str_plain_props_str_plain_s_tuple;
extern PyObject *const_str_plain_end_figure;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_d1e9155136963092d9fab9b67fbb0f7f;
extern PyObject *const_str_plain_linematrix;
extern PyObject *const_tuple_str_plain_self_str_plain_page_tuple;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_stroke;
extern PyObject *const_str_plain_pop;
static PyObject *const_float_0_01;
extern PyObject *const_str_plain_set_ctm;
extern PyObject *const_str_plain_enc;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_render_string_vertical;
static PyObject *const_str_digest_effaccf01132aa7a279407b5ff12ad69;
static PyObject *const_str_digest_9fecd3675fe5b5611f65d1f1a5bab77c;
extern PyObject *const_tuple_str_plain_isnumber_tuple;
static PyObject *const_str_plain_render_string_horizontal;
extern PyObject *const_str_plain_fill;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_a71f1499c6783ff5632f5681d930ae6f_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_self_str_plain_textstate_str_plain_seq_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_textstate_str_plain_seq_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_textstate_str_plain_seq_tuple, 1, const_str_plain_textstate ); Py_INCREF( const_str_plain_textstate );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_textstate_str_plain_seq_tuple, 2, const_str_plain_seq ); Py_INCREF( const_str_plain_seq );
    const_str_digest_f5df4ba3e251e2b438e99f758d54c5f4 = UNSTREAM_STRING( &constant_bin[ 175824 ], 27, 0 );
    const_tuple_str_plain_self_str_plain_rsrcmgr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rsrcmgr_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rsrcmgr_tuple, 1, const_str_plain_rsrcmgr ); Py_INCREF( const_str_plain_rsrcmgr );
    const_tuple_1caa1ad6e4f1df715be3f00d8c98d241_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_1caa1ad6e4f1df715be3f00d8c98d241_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_1caa1ad6e4f1df715be3f00d8c98d241_tuple, 1, const_str_plain_matrix ); Py_INCREF( const_str_plain_matrix );
    PyTuple_SET_ITEM( const_tuple_1caa1ad6e4f1df715be3f00d8c98d241_tuple, 2, const_str_plain_font ); Py_INCREF( const_str_plain_font );
    PyTuple_SET_ITEM( const_tuple_1caa1ad6e4f1df715be3f00d8c98d241_tuple, 3, const_str_plain_fontsize ); Py_INCREF( const_str_plain_fontsize );
    PyTuple_SET_ITEM( const_tuple_1caa1ad6e4f1df715be3f00d8c98d241_tuple, 4, const_str_plain_scaling ); Py_INCREF( const_str_plain_scaling );
    PyTuple_SET_ITEM( const_tuple_1caa1ad6e4f1df715be3f00d8c98d241_tuple, 5, const_str_plain_rise ); Py_INCREF( const_str_plain_rise );
    PyTuple_SET_ITEM( const_tuple_1caa1ad6e4f1df715be3f00d8c98d241_tuple, 6, const_str_plain_cid ); Py_INCREF( const_str_plain_cid );
    const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 1, const_str_plain_seq ); Py_INCREF( const_str_plain_seq );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 2, const_str_plain_matrix ); Py_INCREF( const_str_plain_matrix );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 3, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 4, const_str_plain_font ); Py_INCREF( const_str_plain_font );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 5, const_str_plain_fontsize ); Py_INCREF( const_str_plain_fontsize );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 6, const_str_plain_scaling ); Py_INCREF( const_str_plain_scaling );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 7, const_str_plain_charspace ); Py_INCREF( const_str_plain_charspace );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 8, const_str_plain_wordspace ); Py_INCREF( const_str_plain_wordspace );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 9, const_str_plain_rise ); Py_INCREF( const_str_plain_rise );
    const_str_plain_dxscale = UNSTREAM_STRING( &constant_bin[ 175851 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 10, const_str_plain_dxscale ); Py_INCREF( const_str_plain_dxscale );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 11, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 12, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_str_plain_needcharspace = UNSTREAM_STRING( &constant_bin[ 175858 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 13, const_str_plain_needcharspace ); Py_INCREF( const_str_plain_needcharspace );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 14, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 15, const_str_plain_cid ); Py_INCREF( const_str_plain_cid );
    const_str_digest_59206c0999664f01bcd3241544700ca3 = UNSTREAM_STRING( &constant_bin[ 175871 ], 21, 0 );
    const_str_plain_chars = UNSTREAM_STRING( &constant_bin[ 7362 ], 5, 1 );
    const_str_angle_PDFDevice = UNSTREAM_STRING( &constant_bin[ 175892 ], 11, 0 );
    const_tuple_dca68afbaf4123e4221f4c9cc2e51c34_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_dca68afbaf4123e4221f4c9cc2e51c34_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_dca68afbaf4123e4221f4c9cc2e51c34_tuple, 1, const_str_plain_graphicstate ); Py_INCREF( const_str_plain_graphicstate );
    PyTuple_SET_ITEM( const_tuple_dca68afbaf4123e4221f4c9cc2e51c34_tuple, 2, const_str_plain_stroke ); Py_INCREF( const_str_plain_stroke );
    PyTuple_SET_ITEM( const_tuple_dca68afbaf4123e4221f4c9cc2e51c34_tuple, 3, const_str_plain_fill ); Py_INCREF( const_str_plain_fill );
    PyTuple_SET_ITEM( const_tuple_dca68afbaf4123e4221f4c9cc2e51c34_tuple, 4, const_str_plain_evenodd ); Py_INCREF( const_str_plain_evenodd );
    PyTuple_SET_ITEM( const_tuple_dca68afbaf4123e4221f4c9cc2e51c34_tuple, 5, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    const_tuple_b4e0f3f686b61311c7496ed464e6ac04_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_b4e0f3f686b61311c7496ed464e6ac04_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b4e0f3f686b61311c7496ed464e6ac04_tuple, 1, const_str_plain_textstate ); Py_INCREF( const_str_plain_textstate );
    PyTuple_SET_ITEM( const_tuple_b4e0f3f686b61311c7496ed464e6ac04_tuple, 2, const_str_plain_seq ); Py_INCREF( const_str_plain_seq );
    PyTuple_SET_ITEM( const_tuple_b4e0f3f686b61311c7496ed464e6ac04_tuple, 3, const_str_plain_font ); Py_INCREF( const_str_plain_font );
    PyTuple_SET_ITEM( const_tuple_b4e0f3f686b61311c7496ed464e6ac04_tuple, 4, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    PyTuple_SET_ITEM( const_tuple_b4e0f3f686b61311c7496ed464e6ac04_tuple, 5, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_b4e0f3f686b61311c7496ed464e6ac04_tuple, 6, const_str_plain_chars ); Py_INCREF( const_str_plain_chars );
    PyTuple_SET_ITEM( const_tuple_b4e0f3f686b61311c7496ed464e6ac04_tuple, 7, const_str_plain_cid ); Py_INCREF( const_str_plain_cid );
    PyTuple_SET_ITEM( const_tuple_b4e0f3f686b61311c7496ed464e6ac04_tuple, 8, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    const_tuple_str_plain_translate_matrix_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_translate_matrix_tuple, 0, const_str_plain_translate_matrix ); Py_INCREF( const_str_plain_translate_matrix );
    const_str_digest_7ec1b31610a793924368c978ade2d3bd = UNSTREAM_STRING( &constant_bin[ 6157 ], 36, 0 );
    const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple, 1, const_str_plain_textstate ); Py_INCREF( const_str_plain_textstate );
    PyTuple_SET_ITEM( const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple, 2, const_str_plain_seq ); Py_INCREF( const_str_plain_seq );
    PyTuple_SET_ITEM( const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple, 3, const_str_plain_matrix ); Py_INCREF( const_str_plain_matrix );
    PyTuple_SET_ITEM( const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple, 4, const_str_plain_font ); Py_INCREF( const_str_plain_font );
    PyTuple_SET_ITEM( const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple, 5, const_str_plain_fontsize ); Py_INCREF( const_str_plain_fontsize );
    PyTuple_SET_ITEM( const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple, 6, const_str_plain_scaling ); Py_INCREF( const_str_plain_scaling );
    PyTuple_SET_ITEM( const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple, 7, const_str_plain_charspace ); Py_INCREF( const_str_plain_charspace );
    PyTuple_SET_ITEM( const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple, 8, const_str_plain_wordspace ); Py_INCREF( const_str_plain_wordspace );
    PyTuple_SET_ITEM( const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple, 9, const_str_plain_rise ); Py_INCREF( const_str_plain_rise );
    PyTuple_SET_ITEM( const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple, 10, const_str_plain_dxscale ); Py_INCREF( const_str_plain_dxscale );
    const_str_digest_5496a85b2db775d15367d5a221061371 = UNSTREAM_STRING( &constant_bin[ 175903 ], 8, 0 );
    const_tuple_str_plain_self_str_plain_page_str_plain_ctm_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_page_str_plain_ctm_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_page_str_plain_ctm_tuple, 1, const_str_plain_page ); Py_INCREF( const_str_plain_page );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_page_str_plain_ctm_tuple, 2, const_str_plain_ctm ); Py_INCREF( const_str_plain_ctm );
    const_tuple_str_plain_self_str_plain_tag_str_plain_props_str_plain_s_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tag_str_plain_props_str_plain_s_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tag_str_plain_props_str_plain_s_tuple, 1, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tag_str_plain_props_str_plain_s_tuple, 2, const_str_plain_props ); Py_INCREF( const_str_plain_props );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tag_str_plain_props_str_plain_s_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_float_0_01 = UNSTREAM_FLOAT( &constant_bin[ 175911 ] );
    const_str_plain_render_string_vertical = UNSTREAM_STRING( &constant_bin[ 175919 ], 22, 1 );
    const_str_digest_effaccf01132aa7a279407b5ff12ad69 = UNSTREAM_STRING( &constant_bin[ 175941 ], 5, 0 );
    const_str_digest_9fecd3675fe5b5611f65d1f1a5bab77c = UNSTREAM_STRING( &constant_bin[ 175946 ], 6, 0 );
    const_str_plain_render_string_horizontal = UNSTREAM_STRING( &constant_bin[ 175952 ], 24, 1 );
    const_tuple_a71f1499c6783ff5632f5681d930ae6f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a71f1499c6783ff5632f5681d930ae6f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a71f1499c6783ff5632f5681d930ae6f_tuple, 1, const_str_plain_rsrcmgr ); Py_INCREF( const_str_plain_rsrcmgr );
    PyTuple_SET_ITEM( const_tuple_a71f1499c6783ff5632f5681d930ae6f_tuple, 2, const_str_plain_outfp ); Py_INCREF( const_str_plain_outfp );
    PyTuple_SET_ITEM( const_tuple_a71f1499c6783ff5632f5681d930ae6f_tuple, 3, const_str_plain_codec ); Py_INCREF( const_str_plain_codec );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pdfminer$pdfdevice( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9ed18060408d6f2fafb51cfada08009e;
static PyCodeObject *codeobj_ed182402300968fe7967d9eb4847bd5d;
static PyCodeObject *codeobj_ba8284ff131819b0e7f5eb7dc839a490;
static PyCodeObject *codeobj_42ffd87d709853ef702acb63da59e09b;
static PyCodeObject *codeobj_a7e8c9b8d1402e1c06f79becff0d72f5;
static PyCodeObject *codeobj_daf54eb69c0449e63e0aa9e43b0c2f59;
static PyCodeObject *codeobj_9206d57ea2e7bd4852bb59416cc65b02;
static PyCodeObject *codeobj_d878403b7fd1fe7652af9bf564837089;
static PyCodeObject *codeobj_cbcbf3c42a0e6434b56ee7dc6b1f2009;
static PyCodeObject *codeobj_3694a9c62129d7d20594d39937f33811;
static PyCodeObject *codeobj_6725bacdaa0b385580c0266b7f976a88;
static PyCodeObject *codeobj_65f427802367b2ce74f74589aff00f17;
static PyCodeObject *codeobj_537011ebefbdf98a57a253904ab746f7;
static PyCodeObject *codeobj_641932ecdd935ccae8eca1a9cfb6fad7;
static PyCodeObject *codeobj_49b45ea5b07251b591f7d96dd22bd52a;
static PyCodeObject *codeobj_1c9f3bce0007e2b0f1a4b20ba320c6dc;
static PyCodeObject *codeobj_349576345d68eda04574f1cde60e0205;
static PyCodeObject *codeobj_adeaea7b7f2c73e5365882d2769d4a51;
static PyCodeObject *codeobj_6ec11365eec2d3177f5b77d7b4f54696;
static PyCodeObject *codeobj_b3bbd4aa99574521acc9d1fbaafd0846;
static PyCodeObject *codeobj_ccc03d28108304286e934799b3847a86;
static PyCodeObject *codeobj_f92082a5008b5ef029dd7d05cb799f29;
static PyCodeObject *codeobj_1a5e8f4ee1826d40bd017be7b1ef7c50;
static PyCodeObject *codeobj_d9bf950edd426d9880eb5bd5ddc23f72;
static PyCodeObject *codeobj_20aaddc3cb3039efda3b639bbf4f9fc3;
static PyCodeObject *codeobj_f37002b32e33071067ba0e35e45637ff;
static PyCodeObject *codeobj_22438f69ac072582f700af10604288c5;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_59206c0999664f01bcd3241544700ca3 );
    codeobj_9ed18060408d6f2fafb51cfada08009e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 168, const_tuple_b0c00933e83a0151953f3a00c2178204_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ed182402300968fe7967d9eb4847bd5d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f5df4ba3e251e2b438e99f758d54c5f4, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_ba8284ff131819b0e7f5eb7dc839a490 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 14, const_tuple_str_plain_self_str_plain_rsrcmgr_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_42ffd87d709853ef702acb63da59e09b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 131, const_tuple_a71f1499c6783ff5632f5681d930ae6f_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a7e8c9b8d1402e1c06f79becff0d72f5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 19, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_daf54eb69c0449e63e0aa9e43b0c2f59 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_begin_figure, 44, const_tuple_9610428a1ba6846a8d44a05bfd7779c2_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9206d57ea2e7bd4852bb59416cc65b02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_begin_page, 38, const_tuple_str_plain_self_str_plain_page_str_plain_ctm_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d878403b7fd1fe7652af9bf564837089 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_begin_page, 155, const_tuple_str_plain_self_str_plain_page_str_plain_ctm_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cbcbf3c42a0e6434b56ee7dc6b1f2009 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_begin_tag, 29, const_tuple_str_plain_self_str_plain_tag_str_plain_props_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3694a9c62129d7d20594d39937f33811 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_begin_tag, 165, const_tuple_str_plain_self_str_plain_tag_str_plain_props_str_plain_s_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6725bacdaa0b385580c0266b7f976a88 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 22, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_65f427802367b2ce74f74589aff00f17 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_do_tag, 35, const_tuple_str_plain_self_str_plain_tag_str_plain_props_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_537011ebefbdf98a57a253904ab746f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_do_tag, 180, const_tuple_str_plain_self_str_plain_tag_str_plain_props_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_641932ecdd935ccae8eca1a9cfb6fad7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_end_figure, 47, const_tuple_str_plain_self_str_plain_name_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_49b45ea5b07251b591f7d96dd22bd52a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_end_page, 41, const_tuple_str_plain_self_str_plain_page_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1c9f3bce0007e2b0f1a4b20ba320c6dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_end_page, 160, const_tuple_str_plain_self_str_plain_page_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_349576345d68eda04574f1cde60e0205 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_end_tag, 32, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_adeaea7b7f2c73e5365882d2769d4a51 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_end_tag, 174, const_tuple_str_plain_self_str_plain_tag_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6ec11365eec2d3177f5b77d7b4f54696 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_paint_path, 50, const_tuple_dca68afbaf4123e4221f4c9cc2e51c34_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b3bbd4aa99574521acc9d1fbaafd0846 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_render_char, 123, const_tuple_1caa1ad6e4f1df715be3f00d8c98d241_tuple, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ccc03d28108304286e934799b3847a86 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_render_image, 53, const_tuple_str_plain_self_str_plain_name_str_plain_stream_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f92082a5008b5ef029dd7d05cb799f29 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_render_string, 56, const_tuple_str_plain_self_str_plain_textstate_str_plain_seq_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1a5e8f4ee1826d40bd017be7b1ef7c50 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_render_string, 64, const_tuple_6a6de23fb34e751f12a873efe9a754dc_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9bf950edd426d9880eb5bd5ddc23f72 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_render_string, 139, const_tuple_b4e0f3f686b61311c7496ed464e6ac04_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_20aaddc3cb3039efda3b639bbf4f9fc3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_render_string_horizontal, 85, const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f37002b32e33071067ba0e35e45637ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_render_string_vertical, 104, const_tuple_040ad1b5f3819901435fdb57b1bb75ed_tuple, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_22438f69ac072582f700af10604288c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_ctm, 25, const_tuple_str_plain_self_str_plain_ctm_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *pdfminer$pdfdevice$$$function_23_begin_tag$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void pdfminer$pdfdevice$$$function_23_begin_tag$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_10_begin_figure(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_11_end_figure(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_12_paint_path(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_13_render_image(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_14_render_string(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_15_render_string(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_16_render_string_horizontal(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_17_render_string_vertical(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_18_render_char(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_19___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_20_render_string(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_21_begin_page(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_22_end_page(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_23_begin_tag( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_24_end_tag(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_25_do_tag( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_2___repr__(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_3_close(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_4_set_ctm(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_5_begin_tag( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_6_end_tag(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_7_do_tag( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_8_begin_page(  );


static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_9_end_page(  );


// The module function definitions.
static PyObject *impl_pdfminer$pdfdevice$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_rsrcmgr = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_ba8284ff131819b0e7f5eb7dc839a490 = NULL;

    struct Nuitka_FrameObject *frame_ba8284ff131819b0e7f5eb7dc839a490;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ba8284ff131819b0e7f5eb7dc839a490, codeobj_ba8284ff131819b0e7f5eb7dc839a490, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *) );
    frame_ba8284ff131819b0e7f5eb7dc839a490 = cache_frame_ba8284ff131819b0e7f5eb7dc839a490;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ba8284ff131819b0e7f5eb7dc839a490 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ba8284ff131819b0e7f5eb7dc839a490 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_rsrcmgr;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_rsrcmgr, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_ctm, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba8284ff131819b0e7f5eb7dc839a490 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba8284ff131819b0e7f5eb7dc839a490 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ba8284ff131819b0e7f5eb7dc839a490, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ba8284ff131819b0e7f5eb7dc839a490->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ba8284ff131819b0e7f5eb7dc839a490, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ba8284ff131819b0e7f5eb7dc839a490,
        type_description_1,
        par_self,
        par_rsrcmgr
    );


    // Release cached frame.
    if ( frame_ba8284ff131819b0e7f5eb7dc839a490 == cache_frame_ba8284ff131819b0e7f5eb7dc839a490 )
    {
        Py_DECREF( frame_ba8284ff131819b0e7f5eb7dc839a490 );
    }
    cache_frame_ba8284ff131819b0e7f5eb7dc839a490 = NULL;

    assertFrameObject( frame_ba8284ff131819b0e7f5eb7dc839a490 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rsrcmgr );
    Py_DECREF( par_rsrcmgr );
    par_rsrcmgr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rsrcmgr );
    Py_DECREF( par_rsrcmgr );
    par_rsrcmgr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_1___init__ );
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


static PyObject *impl_pdfminer$pdfdevice$$$function_2___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_str_angle_PDFDevice;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_2___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_2___repr__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_3_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_3_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_3_close );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_4_set_ctm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_ctm = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_22438f69ac072582f700af10604288c5 = NULL;

    struct Nuitka_FrameObject *frame_22438f69ac072582f700af10604288c5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_22438f69ac072582f700af10604288c5, codeobj_22438f69ac072582f700af10604288c5, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *) );
    frame_22438f69ac072582f700af10604288c5 = cache_frame_22438f69ac072582f700af10604288c5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_22438f69ac072582f700af10604288c5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_22438f69ac072582f700af10604288c5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_ctm;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ctm, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22438f69ac072582f700af10604288c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22438f69ac072582f700af10604288c5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_22438f69ac072582f700af10604288c5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_22438f69ac072582f700af10604288c5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_22438f69ac072582f700af10604288c5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_22438f69ac072582f700af10604288c5,
        type_description_1,
        par_self,
        par_ctm
    );


    // Release cached frame.
    if ( frame_22438f69ac072582f700af10604288c5 == cache_frame_22438f69ac072582f700af10604288c5 )
    {
        Py_DECREF( frame_22438f69ac072582f700af10604288c5 );
    }
    cache_frame_22438f69ac072582f700af10604288c5 = NULL;

    assertFrameObject( frame_22438f69ac072582f700af10604288c5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_4_set_ctm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ctm );
    Py_DECREF( par_ctm );
    par_ctm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ctm );
    Py_DECREF( par_ctm );
    par_ctm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_4_set_ctm );
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


static PyObject *impl_pdfminer$pdfdevice$$$function_5_begin_tag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tag = python_pars[ 1 ];
    PyObject *par_props = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_5_begin_tag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_props );
    Py_DECREF( par_props );
    par_props = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_props );
    Py_DECREF( par_props );
    par_props = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_5_begin_tag );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_6_end_tag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_6_end_tag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_6_end_tag );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_7_do_tag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tag = python_pars[ 1 ];
    PyObject *par_props = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_7_do_tag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_props );
    Py_DECREF( par_props );
    par_props = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_props );
    Py_DECREF( par_props );
    par_props = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_7_do_tag );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_8_begin_page( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_page = python_pars[ 1 ];
    PyObject *par_ctm = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_8_begin_page );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_page );
    Py_DECREF( par_page );
    par_page = NULL;

    CHECK_OBJECT( (PyObject *)par_ctm );
    Py_DECREF( par_ctm );
    par_ctm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_page );
    Py_DECREF( par_page );
    par_page = NULL;

    CHECK_OBJECT( (PyObject *)par_ctm );
    Py_DECREF( par_ctm );
    par_ctm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_8_begin_page );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_9_end_page( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_page = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_9_end_page );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_page );
    Py_DECREF( par_page );
    par_page = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_page );
    Py_DECREF( par_page );
    par_page = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_9_end_page );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_10_begin_figure( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_bbox = python_pars[ 2 ];
    PyObject *par_matrix = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_10_begin_figure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_bbox );
    Py_DECREF( par_bbox );
    par_bbox = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_bbox );
    Py_DECREF( par_bbox );
    par_bbox = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_10_begin_figure );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_11_end_figure( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_11_end_figure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_11_end_figure );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_12_paint_path( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_graphicstate = python_pars[ 1 ];
    PyObject *par_stroke = python_pars[ 2 ];
    PyObject *par_fill = python_pars[ 3 ];
    PyObject *par_evenodd = python_pars[ 4 ];
    PyObject *par_path = python_pars[ 5 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_12_paint_path );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_graphicstate );
    Py_DECREF( par_graphicstate );
    par_graphicstate = NULL;

    CHECK_OBJECT( (PyObject *)par_stroke );
    Py_DECREF( par_stroke );
    par_stroke = NULL;

    CHECK_OBJECT( (PyObject *)par_fill );
    Py_DECREF( par_fill );
    par_fill = NULL;

    CHECK_OBJECT( (PyObject *)par_evenodd );
    Py_DECREF( par_evenodd );
    par_evenodd = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_graphicstate );
    Py_DECREF( par_graphicstate );
    par_graphicstate = NULL;

    CHECK_OBJECT( (PyObject *)par_stroke );
    Py_DECREF( par_stroke );
    par_stroke = NULL;

    CHECK_OBJECT( (PyObject *)par_fill );
    Py_DECREF( par_fill );
    par_fill = NULL;

    CHECK_OBJECT( (PyObject *)par_evenodd );
    Py_DECREF( par_evenodd );
    par_evenodd = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_12_paint_path );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_13_render_image( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_stream = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_13_render_image );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_13_render_image );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_14_render_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_textstate = python_pars[ 1 ];
    PyObject *par_seq = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_14_render_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_textstate );
    Py_DECREF( par_textstate );
    par_textstate = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_textstate );
    Py_DECREF( par_textstate );
    par_textstate = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_14_render_string );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_15_render_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_textstate = python_pars[ 1 ];
    PyObject *par_seq = python_pars[ 2 ];
    PyObject *var_matrix = NULL;
    PyObject *var_font = NULL;
    PyObject *var_fontsize = NULL;
    PyObject *var_scaling = NULL;
    PyObject *var_charspace = NULL;
    PyObject *var_wordspace = NULL;
    PyObject *var_rise = NULL;
    PyObject *var_dxscale = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    static struct Nuitka_FrameObject *cache_frame_1a5e8f4ee1826d40bd017be7b1ef7c50 = NULL;

    struct Nuitka_FrameObject *frame_1a5e8f4ee1826d40bd017be7b1ef7c50;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1a5e8f4ee1826d40bd017be7b1ef7c50, codeobj_1a5e8f4ee1826d40bd017be7b1ef7c50, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1a5e8f4ee1826d40bd017be7b1ef7c50 = cache_frame_1a5e8f4ee1826d40bd017be7b1ef7c50;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1a5e8f4ee1826d40bd017be7b1ef7c50 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1a5e8f4ee1826d40bd017be7b1ef7c50 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_mult_matrix );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mult_matrix );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mult_matrix" );
        exception_tb = NULL;

        exception_lineno = 65;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_textstate;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_matrix );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ctm );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 65;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_1a5e8f4ee1826d40bd017be7b1ef7c50->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_matrix == NULL );
    var_matrix = tmp_assign_source_1;

    tmp_source_name_3 = par_textstate;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_font );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_font == NULL );
    var_font = tmp_assign_source_2;

    tmp_source_name_4 = par_textstate;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_fontsize );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_fontsize == NULL );
    var_fontsize = tmp_assign_source_3;

    tmp_source_name_5 = par_textstate;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_scaling );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_float_0_01;
    tmp_assign_source_4 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_scaling == NULL );
    var_scaling = tmp_assign_source_4;

    tmp_source_name_6 = par_textstate;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_charspace );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = var_scaling;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_assign_source_5 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_charspace == NULL );
    var_charspace = tmp_assign_source_5;

    tmp_source_name_7 = par_textstate;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_wordspace );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = var_scaling;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_assign_source_6 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_wordspace == NULL );
    var_wordspace = tmp_assign_source_6;

    tmp_source_name_8 = par_textstate;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_rise );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_rise == NULL );
    var_rise = tmp_assign_source_7;

    tmp_called_instance_1 = var_font;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_1a5e8f4ee1826d40bd017be7b1ef7c50->m_frame.f_lineno = 72;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_is_multibyte );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 72;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_8 = const_int_0;
    {
        PyObject *old = var_wordspace;
        assert( old != NULL );
        var_wordspace = tmp_assign_source_8;
        Py_INCREF( var_wordspace );
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_left_name_5 = const_float_0_001;
    tmp_right_name_4 = var_fontsize;

    CHECK_OBJECT( tmp_right_name_4 );
    tmp_left_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_4 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = var_scaling;

    CHECK_OBJECT( tmp_right_name_5 );
    tmp_assign_source_9 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_dxscale == NULL );
    var_dxscale = tmp_assign_source_9;

    tmp_called_instance_2 = var_font;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_1a5e8f4ee1826d40bd017be7b1ef7c50->m_frame.f_lineno = 75;
    tmp_cond_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_is_vertical );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 75;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_render_string_vertical );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_seq;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = var_matrix;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_10 = par_textstate;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_linematrix );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 77;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_font;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = var_fontsize;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = var_scaling;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = var_charspace;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_args_element_name_10 = var_wordspace;

    CHECK_OBJECT( tmp_args_element_name_10 );
    tmp_args_element_name_11 = var_rise;

    CHECK_OBJECT( tmp_args_element_name_11 );
    tmp_args_element_name_12 = var_dxscale;

    CHECK_OBJECT( tmp_args_element_name_12 );
    frame_1a5e8f4ee1826d40bd017be7b1ef7c50->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS10( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_textstate;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_linematrix, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 76;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_11 = par_self;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_render_string_horizontal );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = par_seq;

    CHECK_OBJECT( tmp_args_element_name_13 );
    tmp_args_element_name_14 = var_matrix;

    CHECK_OBJECT( tmp_args_element_name_14 );
    tmp_source_name_12 = par_textstate;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_linematrix );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 81;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_16 = var_font;

    CHECK_OBJECT( tmp_args_element_name_16 );
    tmp_args_element_name_17 = var_fontsize;

    CHECK_OBJECT( tmp_args_element_name_17 );
    tmp_args_element_name_18 = var_scaling;

    CHECK_OBJECT( tmp_args_element_name_18 );
    tmp_args_element_name_19 = var_charspace;

    CHECK_OBJECT( tmp_args_element_name_19 );
    tmp_args_element_name_20 = var_wordspace;

    CHECK_OBJECT( tmp_args_element_name_20 );
    tmp_args_element_name_21 = var_rise;

    CHECK_OBJECT( tmp_args_element_name_21 );
    tmp_args_element_name_22 = var_dxscale;

    CHECK_OBJECT( tmp_args_element_name_22 );
    frame_1a5e8f4ee1826d40bd017be7b1ef7c50->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS10( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_textstate;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_linematrix, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 80;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a5e8f4ee1826d40bd017be7b1ef7c50 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a5e8f4ee1826d40bd017be7b1ef7c50 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1a5e8f4ee1826d40bd017be7b1ef7c50, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1a5e8f4ee1826d40bd017be7b1ef7c50->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1a5e8f4ee1826d40bd017be7b1ef7c50, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1a5e8f4ee1826d40bd017be7b1ef7c50,
        type_description_1,
        par_self,
        par_textstate,
        par_seq,
        var_matrix,
        var_font,
        var_fontsize,
        var_scaling,
        var_charspace,
        var_wordspace,
        var_rise,
        var_dxscale
    );


    // Release cached frame.
    if ( frame_1a5e8f4ee1826d40bd017be7b1ef7c50 == cache_frame_1a5e8f4ee1826d40bd017be7b1ef7c50 )
    {
        Py_DECREF( frame_1a5e8f4ee1826d40bd017be7b1ef7c50 );
    }
    cache_frame_1a5e8f4ee1826d40bd017be7b1ef7c50 = NULL;

    assertFrameObject( frame_1a5e8f4ee1826d40bd017be7b1ef7c50 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_15_render_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_textstate );
    Py_DECREF( par_textstate );
    par_textstate = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    CHECK_OBJECT( (PyObject *)var_matrix );
    Py_DECREF( var_matrix );
    var_matrix = NULL;

    CHECK_OBJECT( (PyObject *)var_font );
    Py_DECREF( var_font );
    var_font = NULL;

    CHECK_OBJECT( (PyObject *)var_fontsize );
    Py_DECREF( var_fontsize );
    var_fontsize = NULL;

    CHECK_OBJECT( (PyObject *)var_scaling );
    Py_DECREF( var_scaling );
    var_scaling = NULL;

    CHECK_OBJECT( (PyObject *)var_charspace );
    Py_DECREF( var_charspace );
    var_charspace = NULL;

    CHECK_OBJECT( (PyObject *)var_wordspace );
    Py_DECREF( var_wordspace );
    var_wordspace = NULL;

    CHECK_OBJECT( (PyObject *)var_rise );
    Py_DECREF( var_rise );
    var_rise = NULL;

    CHECK_OBJECT( (PyObject *)var_dxscale );
    Py_DECREF( var_dxscale );
    var_dxscale = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_textstate );
    Py_DECREF( par_textstate );
    par_textstate = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    Py_XDECREF( var_matrix );
    var_matrix = NULL;

    Py_XDECREF( var_font );
    var_font = NULL;

    Py_XDECREF( var_fontsize );
    var_fontsize = NULL;

    Py_XDECREF( var_scaling );
    var_scaling = NULL;

    Py_XDECREF( var_charspace );
    var_charspace = NULL;

    Py_XDECREF( var_wordspace );
    var_wordspace = NULL;

    Py_XDECREF( var_rise );
    var_rise = NULL;

    Py_XDECREF( var_dxscale );
    var_dxscale = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_15_render_string );
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


static PyObject *impl_pdfminer$pdfdevice$$$function_16_render_string_horizontal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_seq = python_pars[ 1 ];
    PyObject *par_matrix = python_pars[ 2 ];
    PyObject *par_pos = python_pars[ 3 ];
    PyObject *par_font = python_pars[ 4 ];
    PyObject *par_fontsize = python_pars[ 5 ];
    PyObject *par_scaling = python_pars[ 6 ];
    PyObject *par_charspace = python_pars[ 7 ];
    PyObject *par_wordspace = python_pars[ 8 ];
    PyObject *par_rise = python_pars[ 9 ];
    PyObject *par_dxscale = python_pars[ 10 ];
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_needcharspace = NULL;
    PyObject *var_obj = NULL;
    PyObject *var_cid = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_20aaddc3cb3039efda3b639bbf4f9fc3 = NULL;

    struct Nuitka_FrameObject *frame_20aaddc3cb3039efda3b639bbf4f9fc3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_20aaddc3cb3039efda3b639bbf4f9fc3, codeobj_20aaddc3cb3039efda3b639bbf4f9fc3, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_20aaddc3cb3039efda3b639bbf4f9fc3 = cache_frame_20aaddc3cb3039efda3b639bbf4f9fc3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_20aaddc3cb3039efda3b639bbf4f9fc3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_20aaddc3cb3039efda3b639bbf4f9fc3 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_iter_arg_1 = par_pos;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 87;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 87;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

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

                type_description_1 = "oooooooooooooooo";
                exception_lineno = 87;
                goto try_except_handler_3;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooooooooo";
        exception_lineno = 87;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_x == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_x = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_y == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_y = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_6 = Py_False;
    assert( var_needcharspace == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_needcharspace = tmp_assign_source_6;

    tmp_iter_arg_2 = par_seq;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooo";
            exception_lineno = 89;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_obj;
        var_obj = tmp_assign_source_9;
        Py_INCREF( var_obj );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_isnumber );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isnumber );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isnumber" );
        exception_tb = NULL;

        exception_lineno = 90;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_1 = var_obj;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_20aaddc3cb3039efda3b639bbf4f9fc3->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 90;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = var_x;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;

        exception_lineno = 91;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_left_name_2 = var_obj;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = par_dxscale;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_10 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    var_x = tmp_assign_source_10;

    tmp_assign_source_11 = Py_True;
    {
        PyObject *old = var_needcharspace;
        var_needcharspace = tmp_assign_source_11;
        Py_INCREF( var_needcharspace );
        Py_XDECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_1 = par_font;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_2 = var_obj;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_20aaddc3cb3039efda3b639bbf4f9fc3->m_frame.f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_iter_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, call_args );
    }

    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooo";
            exception_lineno = 94;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = var_cid;
        var_cid = tmp_assign_source_14;
        Py_INCREF( var_cid );
        Py_XDECREF( old );
    }

    tmp_cond_value_2 = var_needcharspace;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "needcharspace" );
        exception_tb = NULL;

        exception_lineno = 95;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
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
    tmp_left_name_3 = var_x;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;

        exception_lineno = 96;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_right_name_3 = par_charspace;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_15 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    var_x = tmp_assign_source_15;

    branch_no_2:;
    tmp_left_name_4 = var_x;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_render_char );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_translate_matrix );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_translate_matrix );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "translate_matrix" );
        exception_tb = NULL;

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_4 = par_matrix;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_x;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_y;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
    frame_20aaddc3cb3039efda3b639bbf4f9fc3->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_args_element_name_6 = par_font;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = par_fontsize;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = par_scaling;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = par_rise;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_args_element_name_10 = var_cid;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_20aaddc3cb3039efda3b639bbf4f9fc3->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_16 = tmp_left_name_4;
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    var_x = tmp_assign_source_16;

    tmp_compexpr_left_1 = var_cid;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_pos_32;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 99;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_and_right_value_1 = par_wordspace;

    CHECK_OBJECT( tmp_and_right_value_1 );
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_3 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_3 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 99;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_5 = var_x;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = par_wordspace;

    CHECK_OBJECT( tmp_right_name_5 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_17 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    var_x = tmp_assign_source_17;

    branch_no_3:;
    tmp_assign_source_18 = Py_True;
    {
        PyObject *old = var_needcharspace;
        var_needcharspace = tmp_assign_source_18;
        Py_INCREF( var_needcharspace );
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_x;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;

        exception_lineno = 102;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_y;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20aaddc3cb3039efda3b639bbf4f9fc3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_20aaddc3cb3039efda3b639bbf4f9fc3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20aaddc3cb3039efda3b639bbf4f9fc3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_20aaddc3cb3039efda3b639bbf4f9fc3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_20aaddc3cb3039efda3b639bbf4f9fc3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_20aaddc3cb3039efda3b639bbf4f9fc3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_20aaddc3cb3039efda3b639bbf4f9fc3,
        type_description_1,
        par_self,
        par_seq,
        par_matrix,
        par_pos,
        par_font,
        par_fontsize,
        par_scaling,
        par_charspace,
        par_wordspace,
        par_rise,
        par_dxscale,
        var_x,
        var_y,
        var_needcharspace,
        var_obj,
        var_cid
    );


    // Release cached frame.
    if ( frame_20aaddc3cb3039efda3b639bbf4f9fc3 == cache_frame_20aaddc3cb3039efda3b639bbf4f9fc3 )
    {
        Py_DECREF( frame_20aaddc3cb3039efda3b639bbf4f9fc3 );
    }
    cache_frame_20aaddc3cb3039efda3b639bbf4f9fc3 = NULL;

    assertFrameObject( frame_20aaddc3cb3039efda3b639bbf4f9fc3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_16_render_string_horizontal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

    CHECK_OBJECT( (PyObject *)par_pos );
    Py_DECREF( par_pos );
    par_pos = NULL;

    CHECK_OBJECT( (PyObject *)par_font );
    Py_DECREF( par_font );
    par_font = NULL;

    CHECK_OBJECT( (PyObject *)par_fontsize );
    Py_DECREF( par_fontsize );
    par_fontsize = NULL;

    CHECK_OBJECT( (PyObject *)par_scaling );
    Py_DECREF( par_scaling );
    par_scaling = NULL;

    CHECK_OBJECT( (PyObject *)par_charspace );
    Py_DECREF( par_charspace );
    par_charspace = NULL;

    CHECK_OBJECT( (PyObject *)par_wordspace );
    Py_DECREF( par_wordspace );
    par_wordspace = NULL;

    CHECK_OBJECT( (PyObject *)par_rise );
    Py_DECREF( par_rise );
    par_rise = NULL;

    CHECK_OBJECT( (PyObject *)par_dxscale );
    Py_DECREF( par_dxscale );
    par_dxscale = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_needcharspace );
    var_needcharspace = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_cid );
    var_cid = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

    CHECK_OBJECT( (PyObject *)par_pos );
    Py_DECREF( par_pos );
    par_pos = NULL;

    CHECK_OBJECT( (PyObject *)par_font );
    Py_DECREF( par_font );
    par_font = NULL;

    CHECK_OBJECT( (PyObject *)par_fontsize );
    Py_DECREF( par_fontsize );
    par_fontsize = NULL;

    CHECK_OBJECT( (PyObject *)par_scaling );
    Py_DECREF( par_scaling );
    par_scaling = NULL;

    CHECK_OBJECT( (PyObject *)par_charspace );
    Py_DECREF( par_charspace );
    par_charspace = NULL;

    CHECK_OBJECT( (PyObject *)par_wordspace );
    Py_DECREF( par_wordspace );
    par_wordspace = NULL;

    CHECK_OBJECT( (PyObject *)par_rise );
    Py_DECREF( par_rise );
    par_rise = NULL;

    CHECK_OBJECT( (PyObject *)par_dxscale );
    Py_DECREF( par_dxscale );
    par_dxscale = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_needcharspace );
    var_needcharspace = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_cid );
    var_cid = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_16_render_string_horizontal );
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


static PyObject *impl_pdfminer$pdfdevice$$$function_17_render_string_vertical( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_seq = python_pars[ 1 ];
    PyObject *par_matrix = python_pars[ 2 ];
    PyObject *par_pos = python_pars[ 3 ];
    PyObject *par_font = python_pars[ 4 ];
    PyObject *par_fontsize = python_pars[ 5 ];
    PyObject *par_scaling = python_pars[ 6 ];
    PyObject *par_charspace = python_pars[ 7 ];
    PyObject *par_wordspace = python_pars[ 8 ];
    PyObject *par_rise = python_pars[ 9 ];
    PyObject *par_dxscale = python_pars[ 10 ];
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_needcharspace = NULL;
    PyObject *var_obj = NULL;
    PyObject *var_cid = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_f37002b32e33071067ba0e35e45637ff = NULL;

    struct Nuitka_FrameObject *frame_f37002b32e33071067ba0e35e45637ff;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f37002b32e33071067ba0e35e45637ff, codeobj_f37002b32e33071067ba0e35e45637ff, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f37002b32e33071067ba0e35e45637ff = cache_frame_f37002b32e33071067ba0e35e45637ff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f37002b32e33071067ba0e35e45637ff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f37002b32e33071067ba0e35e45637ff ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_iter_arg_1 = par_pos;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 106;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 106;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

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

                type_description_1 = "oooooooooooooooo";
                exception_lineno = 106;
                goto try_except_handler_3;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooooooooo";
        exception_lineno = 106;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_x == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_x = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_y == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_y = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_6 = Py_False;
    assert( var_needcharspace == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_needcharspace = tmp_assign_source_6;

    tmp_iter_arg_2 = par_seq;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooo";
            exception_lineno = 108;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_obj;
        var_obj = tmp_assign_source_9;
        Py_INCREF( var_obj );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_isnumber );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isnumber );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isnumber" );
        exception_tb = NULL;

        exception_lineno = 109;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_1 = var_obj;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_f37002b32e33071067ba0e35e45637ff->m_frame.f_lineno = 109;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 109;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = var_y;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 110;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_left_name_2 = var_obj;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = par_dxscale;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_10 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    var_y = tmp_assign_source_10;

    tmp_assign_source_11 = Py_True;
    {
        PyObject *old = var_needcharspace;
        var_needcharspace = tmp_assign_source_11;
        Py_INCREF( var_needcharspace );
        Py_XDECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_1 = par_font;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_2 = var_obj;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_f37002b32e33071067ba0e35e45637ff->m_frame.f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_iter_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, call_args );
    }

    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooo";
            exception_lineno = 113;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = var_cid;
        var_cid = tmp_assign_source_14;
        Py_INCREF( var_cid );
        Py_XDECREF( old );
    }

    tmp_cond_value_2 = var_needcharspace;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "needcharspace" );
        exception_tb = NULL;

        exception_lineno = 114;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
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
    tmp_left_name_3 = var_y;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_right_name_3 = par_charspace;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_15 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    var_y = tmp_assign_source_15;

    branch_no_2:;
    tmp_left_name_4 = var_y;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 116;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_render_char );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_translate_matrix );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_translate_matrix );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "translate_matrix" );
        exception_tb = NULL;

        exception_lineno = 116;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_4 = par_matrix;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_x;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_y;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 116;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
    frame_f37002b32e33071067ba0e35e45637ff->m_frame.f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 116;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_args_element_name_6 = par_font;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = par_fontsize;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = par_scaling;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = par_rise;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_args_element_name_10 = var_cid;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_f37002b32e33071067ba0e35e45637ff->m_frame.f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_16 = tmp_left_name_4;
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    var_y = tmp_assign_source_16;

    tmp_compexpr_left_1 = var_cid;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_pos_32;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 118;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_and_right_value_1 = par_wordspace;

    CHECK_OBJECT( tmp_and_right_value_1 );
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_3 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_3 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 118;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_5 = var_y;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = par_wordspace;

    CHECK_OBJECT( tmp_right_name_5 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_17 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    var_y = tmp_assign_source_17;

    branch_no_3:;
    tmp_assign_source_18 = Py_True;
    {
        PyObject *old = var_needcharspace;
        var_needcharspace = tmp_assign_source_18;
        Py_INCREF( var_needcharspace );
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_x;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_y;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 121;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f37002b32e33071067ba0e35e45637ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f37002b32e33071067ba0e35e45637ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f37002b32e33071067ba0e35e45637ff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f37002b32e33071067ba0e35e45637ff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f37002b32e33071067ba0e35e45637ff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f37002b32e33071067ba0e35e45637ff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f37002b32e33071067ba0e35e45637ff,
        type_description_1,
        par_self,
        par_seq,
        par_matrix,
        par_pos,
        par_font,
        par_fontsize,
        par_scaling,
        par_charspace,
        par_wordspace,
        par_rise,
        par_dxscale,
        var_x,
        var_y,
        var_needcharspace,
        var_obj,
        var_cid
    );


    // Release cached frame.
    if ( frame_f37002b32e33071067ba0e35e45637ff == cache_frame_f37002b32e33071067ba0e35e45637ff )
    {
        Py_DECREF( frame_f37002b32e33071067ba0e35e45637ff );
    }
    cache_frame_f37002b32e33071067ba0e35e45637ff = NULL;

    assertFrameObject( frame_f37002b32e33071067ba0e35e45637ff );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_17_render_string_vertical );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

    CHECK_OBJECT( (PyObject *)par_pos );
    Py_DECREF( par_pos );
    par_pos = NULL;

    CHECK_OBJECT( (PyObject *)par_font );
    Py_DECREF( par_font );
    par_font = NULL;

    CHECK_OBJECT( (PyObject *)par_fontsize );
    Py_DECREF( par_fontsize );
    par_fontsize = NULL;

    CHECK_OBJECT( (PyObject *)par_scaling );
    Py_DECREF( par_scaling );
    par_scaling = NULL;

    CHECK_OBJECT( (PyObject *)par_charspace );
    Py_DECREF( par_charspace );
    par_charspace = NULL;

    CHECK_OBJECT( (PyObject *)par_wordspace );
    Py_DECREF( par_wordspace );
    par_wordspace = NULL;

    CHECK_OBJECT( (PyObject *)par_rise );
    Py_DECREF( par_rise );
    par_rise = NULL;

    CHECK_OBJECT( (PyObject *)par_dxscale );
    Py_DECREF( par_dxscale );
    par_dxscale = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_needcharspace );
    var_needcharspace = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_cid );
    var_cid = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

    CHECK_OBJECT( (PyObject *)par_pos );
    Py_DECREF( par_pos );
    par_pos = NULL;

    CHECK_OBJECT( (PyObject *)par_font );
    Py_DECREF( par_font );
    par_font = NULL;

    CHECK_OBJECT( (PyObject *)par_fontsize );
    Py_DECREF( par_fontsize );
    par_fontsize = NULL;

    CHECK_OBJECT( (PyObject *)par_scaling );
    Py_DECREF( par_scaling );
    par_scaling = NULL;

    CHECK_OBJECT( (PyObject *)par_charspace );
    Py_DECREF( par_charspace );
    par_charspace = NULL;

    CHECK_OBJECT( (PyObject *)par_wordspace );
    Py_DECREF( par_wordspace );
    par_wordspace = NULL;

    CHECK_OBJECT( (PyObject *)par_rise );
    Py_DECREF( par_rise );
    par_rise = NULL;

    CHECK_OBJECT( (PyObject *)par_dxscale );
    Py_DECREF( par_dxscale );
    par_dxscale = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_needcharspace );
    var_needcharspace = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_cid );
    var_cid = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_17_render_string_vertical );
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


static PyObject *impl_pdfminer$pdfdevice$$$function_18_render_char( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_matrix = python_pars[ 1 ];
    PyObject *par_font = python_pars[ 2 ];
    PyObject *par_fontsize = python_pars[ 3 ];
    PyObject *par_scaling = python_pars[ 4 ];
    PyObject *par_rise = python_pars[ 5 ];
    PyObject *par_cid = python_pars[ 6 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_18_render_char );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

    CHECK_OBJECT( (PyObject *)par_font );
    Py_DECREF( par_font );
    par_font = NULL;

    CHECK_OBJECT( (PyObject *)par_fontsize );
    Py_DECREF( par_fontsize );
    par_fontsize = NULL;

    CHECK_OBJECT( (PyObject *)par_scaling );
    Py_DECREF( par_scaling );
    par_scaling = NULL;

    CHECK_OBJECT( (PyObject *)par_rise );
    Py_DECREF( par_rise );
    par_rise = NULL;

    CHECK_OBJECT( (PyObject *)par_cid );
    Py_DECREF( par_cid );
    par_cid = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

    CHECK_OBJECT( (PyObject *)par_font );
    Py_DECREF( par_font );
    par_font = NULL;

    CHECK_OBJECT( (PyObject *)par_fontsize );
    Py_DECREF( par_fontsize );
    par_fontsize = NULL;

    CHECK_OBJECT( (PyObject *)par_scaling );
    Py_DECREF( par_scaling );
    par_scaling = NULL;

    CHECK_OBJECT( (PyObject *)par_rise );
    Py_DECREF( par_rise );
    par_rise = NULL;

    CHECK_OBJECT( (PyObject *)par_cid );
    Py_DECREF( par_cid );
    par_cid = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_18_render_char );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_pdfminer$pdfdevice$$$function_19___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_rsrcmgr = python_pars[ 1 ];
    PyObject *par_outfp = python_pars[ 2 ];
    PyObject *par_codec = python_pars[ 3 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_42ffd87d709853ef702acb63da59e09b = NULL;

    struct Nuitka_FrameObject *frame_42ffd87d709853ef702acb63da59e09b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_42ffd87d709853ef702acb63da59e09b, codeobj_42ffd87d709853ef702acb63da59e09b, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_42ffd87d709853ef702acb63da59e09b = cache_frame_42ffd87d709853ef702acb63da59e09b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_42ffd87d709853ef702acb63da59e09b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_42ffd87d709853ef702acb63da59e09b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_PDFDevice );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDFDevice );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PDFDevice" );
        exception_tb = NULL;

        exception_lineno = 132;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_rsrcmgr;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_42ffd87d709853ef702acb63da59e09b->m_frame.f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_outfp;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_outfp, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_codec;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_codec, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = const_int_0;
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_pageno, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = PyList_New( 0 );
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__stack, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_42ffd87d709853ef702acb63da59e09b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_42ffd87d709853ef702acb63da59e09b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_42ffd87d709853ef702acb63da59e09b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_42ffd87d709853ef702acb63da59e09b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_42ffd87d709853ef702acb63da59e09b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_42ffd87d709853ef702acb63da59e09b,
        type_description_1,
        par_self,
        par_rsrcmgr,
        par_outfp,
        par_codec
    );


    // Release cached frame.
    if ( frame_42ffd87d709853ef702acb63da59e09b == cache_frame_42ffd87d709853ef702acb63da59e09b )
    {
        Py_DECREF( frame_42ffd87d709853ef702acb63da59e09b );
    }
    cache_frame_42ffd87d709853ef702acb63da59e09b = NULL;

    assertFrameObject( frame_42ffd87d709853ef702acb63da59e09b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_19___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rsrcmgr );
    Py_DECREF( par_rsrcmgr );
    par_rsrcmgr = NULL;

    CHECK_OBJECT( (PyObject *)par_outfp );
    Py_DECREF( par_outfp );
    par_outfp = NULL;

    CHECK_OBJECT( (PyObject *)par_codec );
    Py_DECREF( par_codec );
    par_codec = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rsrcmgr );
    Py_DECREF( par_rsrcmgr );
    par_rsrcmgr = NULL;

    CHECK_OBJECT( (PyObject *)par_outfp );
    Py_DECREF( par_outfp );
    par_outfp = NULL;

    CHECK_OBJECT( (PyObject *)par_codec );
    Py_DECREF( par_codec );
    par_codec = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_19___init__ );
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


static PyObject *impl_pdfminer$pdfdevice$$$function_20_render_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_textstate = python_pars[ 1 ];
    PyObject *par_seq = python_pars[ 2 ];
    PyObject *var_font = NULL;
    PyObject *var_text = NULL;
    PyObject *var_obj = NULL;
    PyObject *var_chars = NULL;
    PyObject *var_cid = NULL;
    PyObject *var_char = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d9bf950edd426d9880eb5bd5ddc23f72 = NULL;

    struct Nuitka_FrameObject *frame_d9bf950edd426d9880eb5bd5ddc23f72;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9bf950edd426d9880eb5bd5ddc23f72, codeobj_d9bf950edd426d9880eb5bd5ddc23f72, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d9bf950edd426d9880eb5bd5ddc23f72 = cache_frame_d9bf950edd426d9880eb5bd5ddc23f72;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9bf950edd426d9880eb5bd5ddc23f72 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9bf950edd426d9880eb5bd5ddc23f72 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_textstate;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_font );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_font == NULL );
    var_font = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_empty;
    assert( var_text == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_text = tmp_assign_source_2;

    tmp_iter_arg_1 = par_seq;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            exception_lineno = 142;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_obj;
        var_obj = tmp_assign_source_5;
        Py_INCREF( var_obj );
        Py_XDECREF( old );
    }

    tmp_isinstance_inst_1 = var_obj;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_start_1;
    branch_no_1:;
    tmp_called_instance_1 = var_font;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = var_obj;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_d9bf950edd426d9880eb5bd5ddc23f72->m_frame.f_lineno = 145;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, call_args );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_chars;
        var_chars = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_iter_arg_2 = var_chars;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            exception_lineno = 146;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_cid;
        var_cid = tmp_assign_source_9;
        Py_INCREF( var_cid );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_instance_2 = var_font;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_2 = var_cid;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_d9bf950edd426d9880eb5bd5ddc23f72->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_to_unichr, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_char;
        var_char = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_text;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "text" );
        exception_tb = NULL;

        exception_lineno = 149;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_right_name_1 = var_char;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_11 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    var_text = tmp_assign_source_11;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_d9bf950edd426d9880eb5bd5ddc23f72 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_d9bf950edd426d9880eb5bd5ddc23f72, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_d9bf950edd426d9880eb5bd5ddc23f72, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_PDFUnicodeNotDefined );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDFUnicodeNotDefined );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PDFUnicodeNotDefined" );
        exception_tb = NULL;

        exception_lineno = 150;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 147;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d9bf950edd426d9880eb5bd5ddc23f72->m_frame) frame_d9bf950edd426d9880eb5bd5ddc23f72->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_3;
    branch_no_2:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_20_render_string );
    return NULL;
    // End of try:
    try_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_outfp );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_write );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_enc );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_enc );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "enc" );
        exception_tb = NULL;

        exception_lineno = 152;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_text;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "text" );
        exception_tb = NULL;

        exception_lineno = 152;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_codec );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 152;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_d9bf950edd426d9880eb5bd5ddc23f72->m_frame.f_lineno = 152;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 152;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_d9bf950edd426d9880eb5bd5ddc23f72->m_frame.f_lineno = 152;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 1
    RESTORE_FRAME_EXCEPTION( frame_d9bf950edd426d9880eb5bd5ddc23f72 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_d9bf950edd426d9880eb5bd5ddc23f72 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9bf950edd426d9880eb5bd5ddc23f72, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9bf950edd426d9880eb5bd5ddc23f72->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9bf950edd426d9880eb5bd5ddc23f72, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9bf950edd426d9880eb5bd5ddc23f72,
        type_description_1,
        par_self,
        par_textstate,
        par_seq,
        var_font,
        var_text,
        var_obj,
        var_chars,
        var_cid,
        var_char
    );


    // Release cached frame.
    if ( frame_d9bf950edd426d9880eb5bd5ddc23f72 == cache_frame_d9bf950edd426d9880eb5bd5ddc23f72 )
    {
        Py_DECREF( frame_d9bf950edd426d9880eb5bd5ddc23f72 );
    }
    cache_frame_d9bf950edd426d9880eb5bd5ddc23f72 = NULL;

    assertFrameObject( frame_d9bf950edd426d9880eb5bd5ddc23f72 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_20_render_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_textstate );
    Py_DECREF( par_textstate );
    par_textstate = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    CHECK_OBJECT( (PyObject *)var_font );
    Py_DECREF( var_font );
    var_font = NULL;

    Py_XDECREF( var_text );
    var_text = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_chars );
    var_chars = NULL;

    Py_XDECREF( var_cid );
    var_cid = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_textstate );
    Py_DECREF( par_textstate );
    par_textstate = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    Py_XDECREF( var_font );
    var_font = NULL;

    Py_XDECREF( var_text );
    var_text = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_chars );
    var_chars = NULL;

    Py_XDECREF( var_cid );
    var_cid = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_20_render_string );
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


static PyObject *impl_pdfminer$pdfdevice$$$function_21_begin_page( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_page = python_pars[ 1 ];
    PyObject *par_ctm = python_pars[ 2 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d878403b7fd1fe7652af9bf564837089 = NULL;

    struct Nuitka_FrameObject *frame_d878403b7fd1fe7652af9bf564837089;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d878403b7fd1fe7652af9bf564837089, codeobj_d878403b7fd1fe7652af9bf564837089, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d878403b7fd1fe7652af9bf564837089 = cache_frame_d878403b7fd1fe7652af9bf564837089;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d878403b7fd1fe7652af9bf564837089 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d878403b7fd1fe7652af9bf564837089 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_outfp );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_write );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_7ec1b31610a793924368c978ade2d3bd;
    tmp_right_name_1 = PyTuple_New( 3 );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pageno );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 157;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_bbox2str );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bbox2str );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bbox2str" );
        exception_tb = NULL;

        exception_lineno = 157;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_page;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mediabox );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 157;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_d878403b7fd1fe7652af9bf564837089->m_frame.f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 157;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_source_name_5 = par_page;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_rotate );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 157;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_d878403b7fd1fe7652af9bf564837089->m_frame.f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d878403b7fd1fe7652af9bf564837089 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d878403b7fd1fe7652af9bf564837089 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d878403b7fd1fe7652af9bf564837089, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d878403b7fd1fe7652af9bf564837089->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d878403b7fd1fe7652af9bf564837089, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d878403b7fd1fe7652af9bf564837089,
        type_description_1,
        par_self,
        par_page,
        par_ctm
    );


    // Release cached frame.
    if ( frame_d878403b7fd1fe7652af9bf564837089 == cache_frame_d878403b7fd1fe7652af9bf564837089 )
    {
        Py_DECREF( frame_d878403b7fd1fe7652af9bf564837089 );
    }
    cache_frame_d878403b7fd1fe7652af9bf564837089 = NULL;

    assertFrameObject( frame_d878403b7fd1fe7652af9bf564837089 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_21_begin_page );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_page );
    Py_DECREF( par_page );
    par_page = NULL;

    CHECK_OBJECT( (PyObject *)par_ctm );
    Py_DECREF( par_ctm );
    par_ctm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_page );
    Py_DECREF( par_page );
    par_page = NULL;

    CHECK_OBJECT( (PyObject *)par_ctm );
    Py_DECREF( par_ctm );
    par_ctm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_21_begin_page );
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


static PyObject *impl_pdfminer$pdfdevice$$$function_22_end_page( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_page = python_pars[ 1 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_isnot_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1c9f3bce0007e2b0f1a4b20ba320c6dc = NULL;

    struct Nuitka_FrameObject *frame_1c9f3bce0007e2b0f1a4b20ba320c6dc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1c9f3bce0007e2b0f1a4b20ba320c6dc, codeobj_1c9f3bce0007e2b0f1a4b20ba320c6dc, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *) );
    frame_1c9f3bce0007e2b0f1a4b20ba320c6dc = cache_frame_1c9f3bce0007e2b0f1a4b20ba320c6dc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1c9f3bce0007e2b0f1a4b20ba320c6dc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1c9f3bce0007e2b0f1a4b20ba320c6dc ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_outfp );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_1c9f3bce0007e2b0f1a4b20ba320c6dc->m_frame.f_lineno = 161;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_digest_00b407740d742ef21d6f97842b0811ea_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pageno );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_1;

    // Tried code:
    tmp_left_name_1 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_2;

    // Tried code:
    tmp_compare_left_1 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pageno, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    branch_no_1:;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c9f3bce0007e2b0f1a4b20ba320c6dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c9f3bce0007e2b0f1a4b20ba320c6dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1c9f3bce0007e2b0f1a4b20ba320c6dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1c9f3bce0007e2b0f1a4b20ba320c6dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1c9f3bce0007e2b0f1a4b20ba320c6dc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c9f3bce0007e2b0f1a4b20ba320c6dc,
        type_description_1,
        par_self,
        par_page
    );


    // Release cached frame.
    if ( frame_1c9f3bce0007e2b0f1a4b20ba320c6dc == cache_frame_1c9f3bce0007e2b0f1a4b20ba320c6dc )
    {
        Py_DECREF( frame_1c9f3bce0007e2b0f1a4b20ba320c6dc );
    }
    cache_frame_1c9f3bce0007e2b0f1a4b20ba320c6dc = NULL;

    assertFrameObject( frame_1c9f3bce0007e2b0f1a4b20ba320c6dc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_22_end_page );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_page );
    Py_DECREF( par_page );
    par_page = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_page );
    Py_DECREF( par_page );
    par_page = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_22_end_page );
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


static PyObject *impl_pdfminer$pdfdevice$$$function_23_begin_tag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tag = python_pars[ 1 ];
    PyObject *par_props = python_pars[ 2 ];
    PyObject *var_s = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3694a9c62129d7d20594d39937f33811 = NULL;

    struct Nuitka_FrameObject *frame_3694a9c62129d7d20594d39937f33811;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_empty;
    assert( var_s == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_s = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3694a9c62129d7d20594d39937f33811, codeobj_3694a9c62129d7d20594d39937f33811, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3694a9c62129d7d20594d39937f33811 = cache_frame_3694a9c62129d7d20594d39937f33811;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3694a9c62129d7d20594d39937f33811 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3694a9c62129d7d20594d39937f33811 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_props;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = const_str_empty;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_1 != NULL );
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_sorted );
    assert( tmp_called_name_2 != NULL );
    tmp_called_instance_1 = par_props;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_3694a9c62129d7d20594d39937f33811->m_frame.f_lineno = 169;
    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_iteritems );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_3694a9c62129d7d20594d39937f33811->m_frame.f_lineno = 169;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_3;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        pdfminer$pdfdevice$$$function_23_begin_tag$$$genexpr_1_genexpr_context,
        module_pdfminer$pdfdevice,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_9ed18060408d6f2fafb51cfada08009e,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 1 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_23_begin_tag );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_23_begin_tag );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_1 = tmp_outline_return_value_1;
    frame_3694a9c62129d7d20594d39937f33811->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_s;
        assert( old != NULL );
        var_s = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_outfp );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_write );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_9fecd3675fe5b5611f65d1f1a5bab77c;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_enc );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_enc );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "enc" );
        exception_tb = NULL;

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_tag;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_3694a9c62129d7d20594d39937f33811->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_s;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_3694a9c62129d7d20594d39937f33811->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__stack );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_tag;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_3694a9c62129d7d20594d39937f33811->m_frame.f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
    }

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3694a9c62129d7d20594d39937f33811 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3694a9c62129d7d20594d39937f33811 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3694a9c62129d7d20594d39937f33811, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3694a9c62129d7d20594d39937f33811->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3694a9c62129d7d20594d39937f33811, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3694a9c62129d7d20594d39937f33811,
        type_description_1,
        par_self,
        par_tag,
        par_props,
        var_s
    );


    // Release cached frame.
    if ( frame_3694a9c62129d7d20594d39937f33811 == cache_frame_3694a9c62129d7d20594d39937f33811 )
    {
        Py_DECREF( frame_3694a9c62129d7d20594d39937f33811 );
    }
    cache_frame_3694a9c62129d7d20594d39937f33811 = NULL;

    assertFrameObject( frame_3694a9c62129d7d20594d39937f33811 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_23_begin_tag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_props );
    Py_DECREF( par_props );
    par_props = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_props );
    Py_DECREF( par_props );
    par_props = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_23_begin_tag );
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct pdfminer$pdfdevice$$$function_23_begin_tag$$$genexpr_1_genexpr_locals {
    PyObject *var_k
    PyObject *var_v
    PyObject *tmp_iter_value_0
    PyObject *tmp_tuple_unpack_1__element_1
    PyObject *tmp_tuple_unpack_1__element_2
    PyObject *tmp_tuple_unpack_1__source_iter
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *pdfminer$pdfdevice$$$function_23_begin_tag$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void pdfminer$pdfdevice$$$function_23_begin_tag$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_9ed18060408d6f2fafb51cfada08009e, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->m_frame.f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_next_source_1 = NULL;
    }
    else
    {
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
    }

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "Noo";
            exception_lineno = 168;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_1 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "Noo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "Noo";
        exception_lineno = 168;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "Noo";
        exception_lineno = 168;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

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

                type_description_1 = "Noo";
                exception_lineno = 168;
                goto try_except_handler_4;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "Noo";
        exception_lineno = 168;
        goto try_except_handler_4;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_5;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_6;
        Py_INCREF( var_v );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_left_name_1 = const_str_digest_5496a85b2db775d15367d5a221061371;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_enc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_enc );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "enc" );
        exception_tb = NULL;

        exception_lineno = 168;
        type_description_1 = "Noo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_k;

    CHECK_OBJECT( tmp_args_element_name_1 );
    generator->m_frame->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 168;
        type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_enc );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_enc );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "enc" );
        exception_tb = NULL;

        exception_lineno = 168;
        type_description_1 = "Noo";
        goto try_except_handler_2;
    }

    tmp_str_arg_1 = var_v;

    CHECK_OBJECT( tmp_str_arg_1 );
    tmp_args_element_name_2 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 168;
        type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    generator->m_frame->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 168;
        type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_expression_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            NULL,
            var_k,
            var_v
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_pdfminer$pdfdevice$$$function_24_end_tag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_tag = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_adeaea7b7f2c73e5365882d2769d4a51 = NULL;

    struct Nuitka_FrameObject *frame_adeaea7b7f2c73e5365882d2769d4a51;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_adeaea7b7f2c73e5365882d2769d4a51, codeobj_adeaea7b7f2c73e5365882d2769d4a51, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *) );
    frame_adeaea7b7f2c73e5365882d2769d4a51 = cache_frame_adeaea7b7f2c73e5365882d2769d4a51;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_adeaea7b7f2c73e5365882d2769d4a51 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_adeaea7b7f2c73e5365882d2769d4a51 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__stack );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 175;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 175;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__stack );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_adeaea7b7f2c73e5365882d2769d4a51->m_frame.f_lineno = 176;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_int_neg_1_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_tag == NULL );
    var_tag = tmp_assign_source_1;

    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_outfp );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_write );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_effaccf01132aa7a279407b5ff12ad69;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_enc );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_enc );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "enc" );
        exception_tb = NULL;

        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = var_tag;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_name );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_adeaea7b7f2c73e5365882d2769d4a51->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_adeaea7b7f2c73e5365882d2769d4a51->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adeaea7b7f2c73e5365882d2769d4a51 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adeaea7b7f2c73e5365882d2769d4a51 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_adeaea7b7f2c73e5365882d2769d4a51, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_adeaea7b7f2c73e5365882d2769d4a51->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_adeaea7b7f2c73e5365882d2769d4a51, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_adeaea7b7f2c73e5365882d2769d4a51,
        type_description_1,
        par_self,
        var_tag
    );


    // Release cached frame.
    if ( frame_adeaea7b7f2c73e5365882d2769d4a51 == cache_frame_adeaea7b7f2c73e5365882d2769d4a51 )
    {
        Py_DECREF( frame_adeaea7b7f2c73e5365882d2769d4a51 );
    }
    cache_frame_adeaea7b7f2c73e5365882d2769d4a51 = NULL;

    assertFrameObject( frame_adeaea7b7f2c73e5365882d2769d4a51 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_24_end_tag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_tag );
    Py_DECREF( var_tag );
    var_tag = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_tag );
    var_tag = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_24_end_tag );
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


static PyObject *impl_pdfminer$pdfdevice$$$function_25_do_tag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tag = python_pars[ 1 ];
    PyObject *par_props = python_pars[ 2 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_537011ebefbdf98a57a253904ab746f7 = NULL;

    struct Nuitka_FrameObject *frame_537011ebefbdf98a57a253904ab746f7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_537011ebefbdf98a57a253904ab746f7, codeobj_537011ebefbdf98a57a253904ab746f7, module_pdfminer$pdfdevice, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_537011ebefbdf98a57a253904ab746f7 = cache_frame_537011ebefbdf98a57a253904ab746f7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_537011ebefbdf98a57a253904ab746f7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_537011ebefbdf98a57a253904ab746f7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_tag;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_props;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_537011ebefbdf98a57a253904ab746f7->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_begin_tag, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__stack );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_537011ebefbdf98a57a253904ab746f7->m_frame.f_lineno = 182;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_int_neg_1_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_537011ebefbdf98a57a253904ab746f7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_537011ebefbdf98a57a253904ab746f7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_537011ebefbdf98a57a253904ab746f7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_537011ebefbdf98a57a253904ab746f7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_537011ebefbdf98a57a253904ab746f7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_537011ebefbdf98a57a253904ab746f7,
        type_description_1,
        par_self,
        par_tag,
        par_props
    );


    // Release cached frame.
    if ( frame_537011ebefbdf98a57a253904ab746f7 == cache_frame_537011ebefbdf98a57a253904ab746f7 )
    {
        Py_DECREF( frame_537011ebefbdf98a57a253904ab746f7 );
    }
    cache_frame_537011ebefbdf98a57a253904ab746f7 = NULL;

    assertFrameObject( frame_537011ebefbdf98a57a253904ab746f7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_25_do_tag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_props );
    Py_DECREF( par_props );
    par_props = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_props );
    Py_DECREF( par_props );
    par_props = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice$$$function_25_do_tag );
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



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_10_begin_figure(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_10_begin_figure,
        const_str_plain_begin_figure,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_daf54eb69c0449e63e0aa9e43b0c2f59,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_11_end_figure(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_11_end_figure,
        const_str_plain_end_figure,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_641932ecdd935ccae8eca1a9cfb6fad7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_12_paint_path(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_12_paint_path,
        const_str_plain_paint_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6ec11365eec2d3177f5b77d7b4f54696,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_13_render_image(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_13_render_image,
        const_str_plain_render_image,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ccc03d28108304286e934799b3847a86,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_14_render_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_14_render_string,
        const_str_plain_render_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f92082a5008b5ef029dd7d05cb799f29,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_15_render_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_15_render_string,
        const_str_plain_render_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1a5e8f4ee1826d40bd017be7b1ef7c50,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_16_render_string_horizontal(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_16_render_string_horizontal,
        const_str_plain_render_string_horizontal,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_20aaddc3cb3039efda3b639bbf4f9fc3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_17_render_string_vertical(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_17_render_string_vertical,
        const_str_plain_render_string_vertical,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f37002b32e33071067ba0e35e45637ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_18_render_char(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_18_render_char,
        const_str_plain_render_char,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b3bbd4aa99574521acc9d1fbaafd0846,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_19___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_42ffd87d709853ef702acb63da59e09b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ba8284ff131819b0e7f5eb7dc839a490,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_20_render_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_20_render_string,
        const_str_plain_render_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d9bf950edd426d9880eb5bd5ddc23f72,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_21_begin_page(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_21_begin_page,
        const_str_plain_begin_page,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d878403b7fd1fe7652af9bf564837089,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_22_end_page(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_22_end_page,
        const_str_plain_end_page,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1c9f3bce0007e2b0f1a4b20ba320c6dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_23_begin_tag( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_23_begin_tag,
        const_str_plain_begin_tag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3694a9c62129d7d20594d39937f33811,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_24_end_tag(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_24_end_tag,
        const_str_plain_end_tag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_adeaea7b7f2c73e5365882d2769d4a51,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_25_do_tag( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_25_do_tag,
        const_str_plain_do_tag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_537011ebefbdf98a57a253904ab746f7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_2___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_2___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a7e8c9b8d1402e1c06f79becff0d72f5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_3_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_3_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6725bacdaa0b385580c0266b7f976a88,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_4_set_ctm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_4_set_ctm,
        const_str_plain_set_ctm,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_22438f69ac072582f700af10604288c5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_5_begin_tag( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_5_begin_tag,
        const_str_plain_begin_tag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cbcbf3c42a0e6434b56ee7dc6b1f2009,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_6_end_tag(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_6_end_tag,
        const_str_plain_end_tag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_349576345d68eda04574f1cde60e0205,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_7_do_tag( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_7_do_tag,
        const_str_plain_do_tag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_65f427802367b2ce74f74589aff00f17,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_8_begin_page(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_8_begin_page,
        const_str_plain_begin_page,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9206d57ea2e7bd4852bb59416cc65b02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pdfminer$pdfdevice$$$function_9_end_page(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pdfminer$pdfdevice$$$function_9_end_page,
        const_str_plain_end_page,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_49b45ea5b07251b591f7d96dd22bd52a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pdfminer$pdfdevice,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pdfminer$pdfdevice =
{
    PyModuleDef_HEAD_INIT,
    "pdfminer.pdfdevice",   /* m_name */
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

MOD_INIT_DECL( pdfminer$pdfdevice )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pdfminer$pdfdevice );
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
    puts("pdfminer.pdfdevice: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pdfminer.pdfdevice: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpdfminer$pdfdevice" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pdfminer$pdfdevice = Py_InitModule4(
        "pdfminer.pdfdevice",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pdfminer$pdfdevice = PyModule_Create( &mdef_pdfminer$pdfdevice );
#endif

    moduledict_pdfminer$pdfdevice = MODULE_DICT( module_pdfminer$pdfdevice );

    CHECK_OBJECT( module_pdfminer$pdfdevice );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d1e9155136963092d9fab9b67fbb0f7f, module_pdfminer$pdfdevice );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var___repr__ = NULL;
    PyObject *outline_0_var_close = NULL;
    PyObject *outline_0_var_set_ctm = NULL;
    PyObject *outline_0_var_begin_tag = NULL;
    PyObject *outline_0_var_end_tag = NULL;
    PyObject *outline_0_var_do_tag = NULL;
    PyObject *outline_0_var_begin_page = NULL;
    PyObject *outline_0_var_end_page = NULL;
    PyObject *outline_0_var_begin_figure = NULL;
    PyObject *outline_0_var_end_figure = NULL;
    PyObject *outline_0_var_paint_path = NULL;
    PyObject *outline_0_var_render_image = NULL;
    PyObject *outline_0_var_render_string = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var_render_string = NULL;
    PyObject *outline_1_var_render_string_horizontal = NULL;
    PyObject *outline_1_var_render_string_vertical = NULL;
    PyObject *outline_1_var_render_char = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var___init__ = NULL;
    PyObject *outline_2_var_render_string = NULL;
    PyObject *outline_2_var_begin_page = NULL;
    PyObject *outline_2_var_end_page = NULL;
    PyObject *outline_2_var_begin_tag = NULL;
    PyObject *outline_2_var_end_tag = NULL;
    PyObject *outline_2_var_do_tag = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
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
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
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
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_key_27;
    PyObject *tmp_dict_key_28;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_dict_value_26;
    PyObject *tmp_dict_value_27;
    PyObject *tmp_dict_value_28;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    struct Nuitka_FrameObject *frame_ed182402300968fe7967d9eb4847bd5d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_ed182402300968fe7967d9eb4847bd5d = MAKE_MODULE_FRAME( codeobj_ed182402300968fe7967d9eb4847bd5d, module_pdfminer$pdfdevice );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ed182402300968fe7967d9eb4847bd5d );
    assert( Py_REFCNT( frame_ed182402300968fe7967d9eb4847bd5d ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_utils;
    tmp_globals_name_1 = (PyObject *)moduledict_pdfminer$pdfdevice;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_mult_matrix_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_ed182402300968fe7967d9eb4847bd5d->m_frame.f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_mult_matrix );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_mult_matrix, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_utils;
    tmp_globals_name_2 = (PyObject *)moduledict_pdfminer$pdfdevice;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_translate_matrix_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_ed182402300968fe7967d9eb4847bd5d->m_frame.f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_translate_matrix );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_translate_matrix, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_utils;
    tmp_globals_name_3 = (PyObject *)moduledict_pdfminer$pdfdevice;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_enc_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_ed182402300968fe7967d9eb4847bd5d->m_frame.f_lineno = 4;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_enc );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_enc, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_utils;
    tmp_globals_name_4 = (PyObject *)moduledict_pdfminer$pdfdevice;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_bbox2str_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_ed182402300968fe7967d9eb4847bd5d->m_frame.f_lineno = 5;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_bbox2str );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_bbox2str, tmp_assign_source_7 );
    tmp_name_name_5 = const_str_plain_utils;
    tmp_globals_name_5 = (PyObject *)moduledict_pdfminer$pdfdevice;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_isnumber_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_ed182402300968fe7967d9eb4847bd5d->m_frame.f_lineno = 6;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_isnumber );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_isnumber, tmp_assign_source_8 );
    tmp_name_name_6 = const_str_plain_pdffont;
    tmp_globals_name_6 = (PyObject *)moduledict_pdfminer$pdfdevice;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_PDFUnicodeNotDefined_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_ed182402300968fe7967d9eb4847bd5d->m_frame.f_lineno = 7;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_PDFUnicodeNotDefined );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_PDFUnicodeNotDefined, tmp_assign_source_9 );
    tmp_assign_source_11 = const_str_digest_d1e9155136963092d9fab9b67fbb0f7f;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_11 );
    outline_0_var___module__ = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_1___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_2___repr__(  );
    assert( outline_0_var___repr__ == NULL );
    outline_0_var___repr__ = tmp_assign_source_13;

    tmp_assign_source_14 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_3_close(  );
    assert( outline_0_var_close == NULL );
    outline_0_var_close = tmp_assign_source_14;

    tmp_assign_source_15 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_4_set_ctm(  );
    assert( outline_0_var_set_ctm == NULL );
    outline_0_var_set_ctm = tmp_assign_source_15;

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_16 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_5_begin_tag( tmp_defaults_1 );
    assert( outline_0_var_begin_tag == NULL );
    outline_0_var_begin_tag = tmp_assign_source_16;

    tmp_assign_source_17 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_6_end_tag(  );
    assert( outline_0_var_end_tag == NULL );
    outline_0_var_end_tag = tmp_assign_source_17;

    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_18 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_7_do_tag( tmp_defaults_2 );
    assert( outline_0_var_do_tag == NULL );
    outline_0_var_do_tag = tmp_assign_source_18;

    tmp_assign_source_19 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_8_begin_page(  );
    assert( outline_0_var_begin_page == NULL );
    outline_0_var_begin_page = tmp_assign_source_19;

    tmp_assign_source_20 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_9_end_page(  );
    assert( outline_0_var_end_page == NULL );
    outline_0_var_end_page = tmp_assign_source_20;

    tmp_assign_source_21 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_10_begin_figure(  );
    assert( outline_0_var_begin_figure == NULL );
    outline_0_var_begin_figure = tmp_assign_source_21;

    tmp_assign_source_22 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_11_end_figure(  );
    assert( outline_0_var_end_figure == NULL );
    outline_0_var_end_figure = tmp_assign_source_22;

    tmp_assign_source_23 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_12_paint_path(  );
    assert( outline_0_var_paint_path == NULL );
    outline_0_var_paint_path = tmp_assign_source_23;

    tmp_assign_source_24 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_13_render_image(  );
    assert( outline_0_var_render_image == NULL );
    outline_0_var_render_image = tmp_assign_source_24;

    tmp_assign_source_25 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_14_render_string(  );
    assert( outline_0_var_render_string == NULL );
    outline_0_var_render_string = tmp_assign_source_25;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 15 );
    tmp_dict_value_1 = outline_0_var___module__;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = outline_0_var___init__;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = outline_0_var___repr__;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain___repr__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_0_var_close;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_close;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_0_var_set_ctm;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_set_ctm;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_0_var_begin_tag;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_begin_tag;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_0_var_end_tag;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_end_tag;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = outline_0_var_do_tag;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_do_tag;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = outline_0_var_begin_page;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_begin_page;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = outline_0_var_end_page;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_end_page;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = outline_0_var_begin_figure;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain_begin_figure;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = outline_0_var_end_figure;

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain_end_figure;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_13 = outline_0_var_paint_path;

    CHECK_OBJECT( tmp_dict_value_13 );
    tmp_dict_key_13 = const_str_plain_paint_path;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = outline_0_var_render_image;

    CHECK_OBJECT( tmp_dict_value_14 );
    tmp_dict_key_14 = const_str_plain_render_image;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_15 = outline_0_var_render_string;

    CHECK_OBJECT( tmp_dict_value_15 );
    tmp_dict_key_15 = const_str_plain_render_string;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___repr__ );
    Py_DECREF( outline_0_var___repr__ );
    outline_0_var___repr__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_close );
    Py_DECREF( outline_0_var_close );
    outline_0_var_close = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_set_ctm );
    Py_DECREF( outline_0_var_set_ctm );
    outline_0_var_set_ctm = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_begin_tag );
    Py_DECREF( outline_0_var_begin_tag );
    outline_0_var_begin_tag = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_end_tag );
    Py_DECREF( outline_0_var_end_tag );
    outline_0_var_end_tag = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_do_tag );
    Py_DECREF( outline_0_var_do_tag );
    outline_0_var_do_tag = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_begin_page );
    Py_DECREF( outline_0_var_begin_page );
    outline_0_var_begin_page = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_end_page );
    Py_DECREF( outline_0_var_end_page );
    outline_0_var_end_page = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_begin_figure );
    Py_DECREF( outline_0_var_begin_figure );
    outline_0_var_begin_figure = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_end_figure );
    Py_DECREF( outline_0_var_end_figure );
    outline_0_var_end_figure = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_paint_path );
    Py_DECREF( outline_0_var_paint_path );
    outline_0_var_paint_path = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_render_image );
    Py_DECREF( outline_0_var_render_image );
    outline_0_var_render_image = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_render_string );
    Py_DECREF( outline_0_var_render_string );
    outline_0_var_render_string = NULL;

    goto outline_result_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_10 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_10;

    // Tried code:
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
    tmp_assign_source_26 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_26 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_26 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_26;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_PDFDevice;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_ed182402300968fe7967d9eb4847bd5d->m_frame.f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_27;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_28 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_28 );
    UPDATE_STRING_DICT0( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_PDFDevice, tmp_assign_source_28 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Tried code:
    tmp_assign_source_29 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_PDFDevice );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDFDevice );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "PDFDevice" );
        exception_tb = NULL;

        exception_lineno = 62;

        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_29, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_29;

    tmp_assign_source_31 = const_str_digest_d1e9155136963092d9fab9b67fbb0f7f;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_31 );
    outline_1_var___module__ = tmp_assign_source_31;

    tmp_assign_source_32 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_15_render_string(  );
    assert( outline_1_var_render_string == NULL );
    outline_1_var_render_string = tmp_assign_source_32;

    tmp_assign_source_33 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_16_render_string_horizontal(  );
    assert( outline_1_var_render_string_horizontal == NULL );
    outline_1_var_render_string_horizontal = tmp_assign_source_33;

    tmp_assign_source_34 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_17_render_string_vertical(  );
    assert( outline_1_var_render_string_vertical == NULL );
    outline_1_var_render_string_vertical = tmp_assign_source_34;

    tmp_assign_source_35 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_18_render_char(  );
    assert( outline_1_var_render_char == NULL );
    outline_1_var_render_char = tmp_assign_source_35;

    // Tried code:
    tmp_outline_return_value_2 = _PyDict_NewPresized( 5 );
    tmp_dict_value_16 = outline_1_var___module__;

    CHECK_OBJECT( tmp_dict_value_16 );
    tmp_dict_key_16 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_17 = outline_1_var_render_string;

    CHECK_OBJECT( tmp_dict_value_17 );
    tmp_dict_key_17 = const_str_plain_render_string;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_17, tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_18 = outline_1_var_render_string_horizontal;

    CHECK_OBJECT( tmp_dict_value_18 );
    tmp_dict_key_18 = const_str_plain_render_string_horizontal;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_18, tmp_dict_value_18 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_19 = outline_1_var_render_string_vertical;

    CHECK_OBJECT( tmp_dict_value_19 );
    tmp_dict_key_19 = const_str_plain_render_string_vertical;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_19, tmp_dict_value_19 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_20 = outline_1_var_render_char;

    CHECK_OBJECT( tmp_dict_value_20 );
    tmp_dict_key_20 = const_str_plain_render_char;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_20, tmp_dict_value_20 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_render_string );
    Py_DECREF( outline_1_var_render_string );
    outline_1_var_render_string = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_render_string_horizontal );
    Py_DECREF( outline_1_var_render_string_horizontal );
    outline_1_var_render_string_horizontal = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_render_string_vertical );
    Py_DECREF( outline_1_var_render_string_vertical );
    outline_1_var_render_string_vertical = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_render_char );
    Py_DECREF( outline_1_var_render_char );
    outline_1_var_render_char = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_render_string );
    Py_DECREF( outline_1_var_render_string );
    outline_1_var_render_string = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_render_string_horizontal );
    Py_DECREF( outline_1_var_render_string_horizontal );
    outline_1_var_render_string_horizontal = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_render_string_vertical );
    Py_DECREF( outline_1_var_render_string_vertical );
    outline_1_var_render_string_vertical = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_render_char );
    Py_DECREF( outline_1_var_render_char );
    outline_1_var_render_char = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_30 = tmp_outline_return_value_2;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_30;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dict_name_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain___metaclass__;
    tmp_assign_source_36 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_subscribed_name_1 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_37 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_3;
    }
    assert( tmp_select_metaclass_2__base == NULL );
    tmp_select_metaclass_2__base = tmp_assign_source_37;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_6;
    }
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_2 );
    Py_XDECREF( exception_keeper_value_2 );
    Py_XDECREF( exception_keeper_tb_2 );
    tmp_type_arg_1 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_3 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_3 != NULL );
    goto try_return_handler_5;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    goto outline_result_3;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice );
    return MOD_RETURN_VALUE( NULL );
    outline_result_3:;
    tmp_assign_source_36 = tmp_outline_return_value_3;
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_36;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = const_str_plain_PDFTextDevice;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_ed182402300968fe7967d9eb4847bd5d->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_3;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_38;

    goto try_end_2;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_39 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_39 );
    UPDATE_STRING_DICT0( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_PDFTextDevice, tmp_assign_source_39 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Tried code:
    tmp_assign_source_40 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_PDFDevice );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDFDevice );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_40 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "PDFDevice" );
        exception_tb = NULL;

        exception_lineno = 129;

        goto try_except_handler_7;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_40, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_40;

    tmp_assign_source_42 = const_str_digest_d1e9155136963092d9fab9b67fbb0f7f;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_42 );
    outline_2_var___module__ = tmp_assign_source_42;

    tmp_defaults_3 = const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_43 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_19___init__( tmp_defaults_3 );
    assert( outline_2_var___init__ == NULL );
    outline_2_var___init__ = tmp_assign_source_43;

    tmp_assign_source_44 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_20_render_string(  );
    assert( outline_2_var_render_string == NULL );
    outline_2_var_render_string = tmp_assign_source_44;

    tmp_assign_source_45 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_21_begin_page(  );
    assert( outline_2_var_begin_page == NULL );
    outline_2_var_begin_page = tmp_assign_source_45;

    tmp_assign_source_46 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_22_end_page(  );
    assert( outline_2_var_end_page == NULL );
    outline_2_var_end_page = tmp_assign_source_46;

    tmp_defaults_4 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_47 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_23_begin_tag( tmp_defaults_4 );
    assert( outline_2_var_begin_tag == NULL );
    outline_2_var_begin_tag = tmp_assign_source_47;

    tmp_assign_source_48 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_24_end_tag(  );
    assert( outline_2_var_end_tag == NULL );
    outline_2_var_end_tag = tmp_assign_source_48;

    tmp_defaults_5 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_49 = MAKE_FUNCTION_pdfminer$pdfdevice$$$function_25_do_tag( tmp_defaults_5 );
    assert( outline_2_var_do_tag == NULL );
    outline_2_var_do_tag = tmp_assign_source_49;

    // Tried code:
    tmp_outline_return_value_4 = _PyDict_NewPresized( 8 );
    tmp_dict_value_21 = outline_2_var___module__;

    CHECK_OBJECT( tmp_dict_value_21 );
    tmp_dict_key_21 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_21, tmp_dict_value_21 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_22 = outline_2_var___init__;

    CHECK_OBJECT( tmp_dict_value_22 );
    tmp_dict_key_22 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_22, tmp_dict_value_22 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_23 = outline_2_var_render_string;

    CHECK_OBJECT( tmp_dict_value_23 );
    tmp_dict_key_23 = const_str_plain_render_string;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_23, tmp_dict_value_23 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_24 = outline_2_var_begin_page;

    CHECK_OBJECT( tmp_dict_value_24 );
    tmp_dict_key_24 = const_str_plain_begin_page;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_24, tmp_dict_value_24 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_25 = outline_2_var_end_page;

    CHECK_OBJECT( tmp_dict_value_25 );
    tmp_dict_key_25 = const_str_plain_end_page;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_25, tmp_dict_value_25 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_26 = outline_2_var_begin_tag;

    CHECK_OBJECT( tmp_dict_value_26 );
    tmp_dict_key_26 = const_str_plain_begin_tag;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_26, tmp_dict_value_26 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_27 = outline_2_var_end_tag;

    CHECK_OBJECT( tmp_dict_value_27 );
    tmp_dict_key_27 = const_str_plain_end_tag;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_27, tmp_dict_value_27 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_28 = outline_2_var_do_tag;

    CHECK_OBJECT( tmp_dict_value_28 );
    tmp_dict_key_28 = const_str_plain_do_tag;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_4, tmp_dict_key_28, tmp_dict_value_28 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___init__ );
    Py_DECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_render_string );
    Py_DECREF( outline_2_var_render_string );
    outline_2_var_render_string = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_begin_page );
    Py_DECREF( outline_2_var_begin_page );
    outline_2_var_begin_page = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_end_page );
    Py_DECREF( outline_2_var_end_page );
    outline_2_var_end_page = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_begin_tag );
    Py_DECREF( outline_2_var_begin_tag );
    outline_2_var_begin_tag = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_end_tag );
    Py_DECREF( outline_2_var_end_tag );
    outline_2_var_end_tag = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_do_tag );
    Py_DECREF( outline_2_var_do_tag );
    outline_2_var_do_tag = NULL;

    goto outline_result_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice );
    return MOD_RETURN_VALUE( NULL );
    outline_result_4:;
    tmp_assign_source_41 = tmp_outline_return_value_4;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_41;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_dict_name_3 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_key_name_3 = const_str_plain___metaclass__;
    tmp_assign_source_50 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_7;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_subscribed_name_2 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_51 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_7;
    }
    assert( tmp_select_metaclass_3__base == NULL );
    tmp_select_metaclass_3__base = tmp_assign_source_51;

    // Tried code:
    // Tried code:
    tmp_source_name_2 = tmp_select_metaclass_3__base;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_outline_return_value_5 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_outline_return_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_10;
    }
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_4 );
    Py_XDECREF( exception_keeper_value_4 );
    Py_XDECREF( exception_keeper_tb_4 );
    tmp_type_arg_2 = tmp_select_metaclass_3__base;

    CHECK_OBJECT( tmp_type_arg_2 );
    tmp_outline_return_value_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( tmp_outline_return_value_5 != NULL );
    goto try_return_handler_9;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
    Py_DECREF( tmp_select_metaclass_3__base );
    tmp_select_metaclass_3__base = NULL;

    goto outline_result_5;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
    Py_DECREF( tmp_select_metaclass_3__base );
    tmp_select_metaclass_3__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pdfminer$pdfdevice );
    return MOD_RETURN_VALUE( NULL );
    outline_result_5:;
    tmp_assign_source_50 = tmp_outline_return_value_5;
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_50;

    tmp_called_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_7 = const_str_plain_TagExtractor;
    tmp_args_element_name_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_ed182402300968fe7967d9eb4847bd5d->m_frame.f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_52;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed182402300968fe7967d9eb4847bd5d );
#endif
    popFrameStack();

    assertFrameObject( frame_ed182402300968fe7967d9eb4847bd5d );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed182402300968fe7967d9eb4847bd5d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed182402300968fe7967d9eb4847bd5d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed182402300968fe7967d9eb4847bd5d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed182402300968fe7967d9eb4847bd5d, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_53 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_53 );
    UPDATE_STRING_DICT0( moduledict_pdfminer$pdfdevice, (Nuitka_StringObject *)const_str_plain_TagExtractor, tmp_assign_source_53 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;


    return MOD_RETURN_VALUE( module_pdfminer$pdfdevice );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
