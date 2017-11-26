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
        { "base64", 6371016, 11253 },
        { "codecs", 6382269, 36646 },
        { "copy_reg", 6418915, 5083 },
        { "encodings", 6423998, -4362 },
        { "encodings.aliases", 6428360, 8760 },
        { "encodings.ascii", 6437120, 2253 },
        { "encodings.base64_codec", 6439373, 3829 },
        { "encodings.big5", 6443202, 1748 },
        { "encodings.big5hkscs", 6444950, 1788 },
        { "encodings.bz2_codec", 6446738, 4721 },
        { "encodings.charmap", 6451459, 3465 },
        { "encodings.cp037", 6454924, 2829 },
        { "encodings.cp1006", 6457753, 2915 },
        { "encodings.cp1026", 6460668, 2843 },
        { "encodings.cp1140", 6463511, 2829 },
        { "encodings.cp1250", 6466340, 2866 },
        { "encodings.cp1251", 6469206, 2863 },
        { "encodings.cp1252", 6472069, 2866 },
        { "encodings.cp1253", 6474935, 2879 },
        { "encodings.cp1254", 6477814, 2868 },
        { "encodings.cp1255", 6480682, 2887 },
        { "encodings.cp1256", 6483569, 2865 },
        { "encodings.cp1257", 6486434, 2873 },
        { "encodings.cp1258", 6489307, 2871 },
        { "encodings.cp424", 6492178, 2859 },
        { "encodings.cp437", 6495037, 8064 },
        { "encodings.cp500", 6503101, 2829 },
        { "encodings.cp720", 6505930, 2926 },
        { "encodings.cp737", 6508856, 8292 },
        { "encodings.cp775", 6517148, 8078 },
        { "encodings.cp850", 6525226, 7811 },
        { "encodings.cp852", 6533037, 8080 },
        { "encodings.cp855", 6541117, 8261 },
        { "encodings.cp856", 6549378, 2891 },
        { "encodings.cp857", 6552269, 7801 },
        { "encodings.cp858", 6560070, 7781 },
        { "encodings.cp860", 6567851, 8047 },
        { "encodings.cp861", 6575898, 8058 },
        { "encodings.cp862", 6583956, 8193 },
        { "encodings.cp863", 6592149, 8058 },
        { "encodings.cp864", 6600207, 8189 },
        { "encodings.cp865", 6608396, 8058 },
        { "encodings.cp866", 6616454, 8293 },
        { "encodings.cp869", 6624747, 8105 },
        { "encodings.cp874", 6632852, 2957 },
        { "encodings.cp875", 6635809, 2826 },
        { "encodings.cp932", 6638635, 1756 },
        { "encodings.cp949", 6640391, 1756 },
        { "encodings.cp950", 6642147, 1756 },
        { "encodings.euc_jis_2004", 6643903, 1812 },
        { "encodings.euc_jisx0213", 6645715, 1812 },
        { "encodings.euc_jp", 6647527, 1764 },
        { "encodings.euc_kr", 6649291, 1764 },
        { "encodings.gb18030", 6651055, 1772 },
        { "encodings.gb2312", 6652827, 1764 },
        { "encodings.gbk", 6654591, 1740 },
        { "encodings.hex_codec", 6656331, 3781 },
        { "encodings.hp_roman8", 6660112, 4112 },
        { "encodings.hz", 6664224, 1732 },
        { "encodings.idna", 6665956, 6368 },
        { "encodings.iso2022_jp", 6672324, 1801 },
        { "encodings.iso2022_jp_1", 6674125, 1817 },
        { "encodings.iso2022_jp_2", 6675942, 1817 },
        { "encodings.iso2022_jp_2004", 6677759, 1841 },
        { "encodings.iso2022_jp_3", 6679600, 1817 },
        { "encodings.iso2022_jp_ext", 6681417, 1833 },
        { "encodings.iso2022_kr", 6683250, 1801 },
        { "encodings.iso8859_1", 6685051, 2868 },
        { "encodings.iso8859_10", 6687919, 2883 },
        { "encodings.iso8859_11", 6690802, 2977 },
        { "encodings.iso8859_13", 6693779, 2886 },
        { "encodings.iso8859_14", 6696665, 2904 },
        { "encodings.iso8859_15", 6699569, 2883 },
        { "encodings.iso8859_16", 6702452, 2885 },
        { "encodings.iso8859_2", 6705337, 2868 },
        { "encodings.iso8859_3", 6708205, 2875 },
        { "encodings.iso8859_4", 6711080, 2868 },
        { "encodings.iso8859_5", 6713948, 2869 },
        { "encodings.iso8859_6", 6716817, 2913 },
        { "encodings.iso8859_7", 6719730, 2876 },
        { "encodings.iso8859_8", 6722606, 2907 },
        { "encodings.iso8859_9", 6725513, 2868 },
        { "encodings.johab", 6728381, 1756 },
        { "encodings.koi8_r", 6730137, 2890 },
        { "encodings.koi8_u", 6733027, 2876 },
        { "encodings.latin_1", 6735903, 2283 },
        { "encodings.mac_arabic", 6738186, 8014 },
        { "encodings.mac_centeuro", 6746200, 2937 },
        { "encodings.mac_croatian", 6749137, 2945 },
        { "encodings.mac_cyrillic", 6752082, 2935 },
        { "encodings.mac_farsi", 6755017, 2849 },
        { "encodings.mac_greek", 6757866, 2889 },
        { "encodings.mac_iceland", 6760755, 2928 },
        { "encodings.mac_latin2", 6763683, 4907 },
        { "encodings.mac_roman", 6768590, 2906 },
        { "encodings.mac_romanian", 6771496, 2946 },
        { "encodings.mac_turkish", 6774442, 2929 },
        { "encodings.palmos", 6777371, 3066 },
        { "encodings.ptcp154", 6780437, 4890 },
        { "encodings.punycode", 6785327, 7980 },
        { "encodings.quopri_codec", 6793307, 3647 },
        { "encodings.raw_unicode_escape", 6796954, 2202 },
        { "encodings.rot_13", 6799156, 3656 },
        { "encodings.shift_jis", 6802812, 1788 },
        { "encodings.shift_jis_2004", 6804600, 1828 },
        { "encodings.shift_jisx0213", 6806428, 1828 },
        { "encodings.string_escape", 6808256, 2061 },
        { "encodings.tis_620", 6810317, 2938 },
        { "encodings.undefined", 6813255, 2589 },
        { "encodings.unicode_escape", 6815844, 2150 },
        { "encodings.unicode_internal", 6817994, 2176 },
        { "encodings.utf_16", 6820170, 5160 },
        { "encodings.utf_16_be", 6825330, 1990 },
        { "encodings.utf_16_le", 6827320, 1990 },
        { "encodings.utf_32", 6829310, 5724 },
        { "encodings.utf_32_be", 6835034, 1883 },
        { "encodings.utf_32_le", 6836917, 1883 },
        { "encodings.utf_7", 6838800, 1883 },
        { "encodings.utf_8", 6840683, 1942 },
        { "encodings.utf_8_sig", 6842625, 4977 },
        { "encodings.uu_codec", 6847602, 4909 },
        { "encodings.zlib_codec", 6852511, 4641 },
        { "functools", 6857152, 6029 },
        { "locale", 6863181, 54994 },
        { "quopri", 6918175, 6544 },
        { "re", 6924719, 13363 },
        { "sre_compile", 6938082, 12521 },
        { "sre_constants", 6950603, 6177 },
        { "sre_parse", 6956780, 19937 },
        { "string", 6976717, 20349 },
        { "stringprep", 6997066, 14441 },
        { "struct", 7011507, 229 },
        { "types", 7011736, 2703 },
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
