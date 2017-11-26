// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo( struct _frozen *destination )
{
    struct frozen_desc frozen_modules[] = {
        { "base64", 6559000, 11253 },
        { "codecs", 6570253, 36646 },
        { "copy_reg", 6606899, 5083 },
        { "encodings", 6611982, -4362 },
        { "encodings.aliases", 6616344, 8760 },
        { "encodings.ascii", 6625104, 2253 },
        { "encodings.base64_codec", 6627357, 3829 },
        { "encodings.big5", 6631186, 1748 },
        { "encodings.big5hkscs", 6632934, 1788 },
        { "encodings.bz2_codec", 6634722, 4721 },
        { "encodings.charmap", 6639443, 3465 },
        { "encodings.cp037", 6642908, 2829 },
        { "encodings.cp1006", 6645737, 2915 },
        { "encodings.cp1026", 6648652, 2843 },
        { "encodings.cp1140", 6651495, 2829 },
        { "encodings.cp1250", 6654324, 2866 },
        { "encodings.cp1251", 6657190, 2863 },
        { "encodings.cp1252", 6660053, 2866 },
        { "encodings.cp1253", 6662919, 2879 },
        { "encodings.cp1254", 6665798, 2868 },
        { "encodings.cp1255", 6668666, 2887 },
        { "encodings.cp1256", 6671553, 2865 },
        { "encodings.cp1257", 6674418, 2873 },
        { "encodings.cp1258", 6677291, 2871 },
        { "encodings.cp424", 6680162, 2859 },
        { "encodings.cp437", 6683021, 8064 },
        { "encodings.cp500", 6691085, 2829 },
        { "encodings.cp720", 6693914, 2926 },
        { "encodings.cp737", 6696840, 8292 },
        { "encodings.cp775", 6705132, 8078 },
        { "encodings.cp850", 6713210, 7811 },
        { "encodings.cp852", 6721021, 8080 },
        { "encodings.cp855", 6729101, 8261 },
        { "encodings.cp856", 6737362, 2891 },
        { "encodings.cp857", 6740253, 7801 },
        { "encodings.cp858", 6748054, 7781 },
        { "encodings.cp860", 6755835, 8047 },
        { "encodings.cp861", 6763882, 8058 },
        { "encodings.cp862", 6771940, 8193 },
        { "encodings.cp863", 6780133, 8058 },
        { "encodings.cp864", 6788191, 8189 },
        { "encodings.cp865", 6796380, 8058 },
        { "encodings.cp866", 6804438, 8293 },
        { "encodings.cp869", 6812731, 8105 },
        { "encodings.cp874", 6820836, 2957 },
        { "encodings.cp875", 6823793, 2826 },
        { "encodings.cp932", 6826619, 1756 },
        { "encodings.cp949", 6828375, 1756 },
        { "encodings.cp950", 6830131, 1756 },
        { "encodings.euc_jis_2004", 6831887, 1812 },
        { "encodings.euc_jisx0213", 6833699, 1812 },
        { "encodings.euc_jp", 6835511, 1764 },
        { "encodings.euc_kr", 6837275, 1764 },
        { "encodings.gb18030", 6839039, 1772 },
        { "encodings.gb2312", 6840811, 1764 },
        { "encodings.gbk", 6842575, 1740 },
        { "encodings.hex_codec", 6844315, 3781 },
        { "encodings.hp_roman8", 6848096, 4112 },
        { "encodings.hz", 6852208, 1732 },
        { "encodings.idna", 6853940, 6368 },
        { "encodings.iso2022_jp", 6860308, 1801 },
        { "encodings.iso2022_jp_1", 6862109, 1817 },
        { "encodings.iso2022_jp_2", 6863926, 1817 },
        { "encodings.iso2022_jp_2004", 6865743, 1841 },
        { "encodings.iso2022_jp_3", 6867584, 1817 },
        { "encodings.iso2022_jp_ext", 6869401, 1833 },
        { "encodings.iso2022_kr", 6871234, 1801 },
        { "encodings.iso8859_1", 6873035, 2868 },
        { "encodings.iso8859_10", 6875903, 2883 },
        { "encodings.iso8859_11", 6878786, 2977 },
        { "encodings.iso8859_13", 6881763, 2886 },
        { "encodings.iso8859_14", 6884649, 2904 },
        { "encodings.iso8859_15", 6887553, 2883 },
        { "encodings.iso8859_16", 6890436, 2885 },
        { "encodings.iso8859_2", 6893321, 2868 },
        { "encodings.iso8859_3", 6896189, 2875 },
        { "encodings.iso8859_4", 6899064, 2868 },
        { "encodings.iso8859_5", 6901932, 2869 },
        { "encodings.iso8859_6", 6904801, 2913 },
        { "encodings.iso8859_7", 6907714, 2876 },
        { "encodings.iso8859_8", 6910590, 2907 },
        { "encodings.iso8859_9", 6913497, 2868 },
        { "encodings.johab", 6916365, 1756 },
        { "encodings.koi8_r", 6918121, 2890 },
        { "encodings.koi8_u", 6921011, 2876 },
        { "encodings.latin_1", 6923887, 2283 },
        { "encodings.mac_arabic", 6926170, 8014 },
        { "encodings.mac_centeuro", 6934184, 2937 },
        { "encodings.mac_croatian", 6937121, 2945 },
        { "encodings.mac_cyrillic", 6940066, 2935 },
        { "encodings.mac_farsi", 6943001, 2849 },
        { "encodings.mac_greek", 6945850, 2889 },
        { "encodings.mac_iceland", 6948739, 2928 },
        { "encodings.mac_latin2", 6951667, 4907 },
        { "encodings.mac_roman", 6956574, 2906 },
        { "encodings.mac_romanian", 6959480, 2946 },
        { "encodings.mac_turkish", 6962426, 2929 },
        { "encodings.palmos", 6965355, 3066 },
        { "encodings.ptcp154", 6968421, 4890 },
        { "encodings.punycode", 6973311, 7980 },
        { "encodings.quopri_codec", 6981291, 3647 },
        { "encodings.raw_unicode_escape", 6984938, 2202 },
        { "encodings.rot_13", 6987140, 3656 },
        { "encodings.shift_jis", 6990796, 1788 },
        { "encodings.shift_jis_2004", 6992584, 1828 },
        { "encodings.shift_jisx0213", 6994412, 1828 },
        { "encodings.string_escape", 6996240, 2061 },
        { "encodings.tis_620", 6998301, 2938 },
        { "encodings.undefined", 7001239, 2589 },
        { "encodings.unicode_escape", 7003828, 2150 },
        { "encodings.unicode_internal", 7005978, 2176 },
        { "encodings.utf_16", 7008154, 5160 },
        { "encodings.utf_16_be", 7013314, 1990 },
        { "encodings.utf_16_le", 7015304, 1990 },
        { "encodings.utf_32", 7017294, 5724 },
        { "encodings.utf_32_be", 7023018, 1883 },
        { "encodings.utf_32_le", 7024901, 1883 },
        { "encodings.utf_7", 7026784, 1883 },
        { "encodings.utf_8", 7028667, 1942 },
        { "encodings.utf_8_sig", 7030609, 4977 },
        { "encodings.uu_codec", 7035586, 4909 },
        { "encodings.zlib_codec", 7040495, 4641 },
        { "functools", 7045136, 6029 },
        { "locale", 7051165, 54994 },
        { "quopri", 7106159, 6544 },
        { "re", 7112703, 13363 },
        { "sre_compile", 7126066, 12521 },
        { "sre_constants", 7138587, 6177 },
        { "sre_parse", 7144764, 19937 },
        { "string", 7164701, 20349 },
        { "stringprep", 7185050, 14441 },
        { "struct", 7199491, 229 },
        { "types", 7199720, 2703 },
        { NULL, 0, 0 }
    };

    struct frozen_desc *current = frozen_modules;

    for(;;)
    {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
