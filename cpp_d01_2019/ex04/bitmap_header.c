/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "bitmap.h"

void make_bmp_header(bmp_header_t *header, size_t size)
{
    int _size_struct = sizeof(bmp_header_t) + sizeof(bmp_info_header_t);

    #if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
        header->magic = 0x4D42;
    #else
        header->magic = 0x424D;
    #endif

    header->size = size * size * sizeof(int) + _size_struct;
    header->_app1 = 0x000;
    header->_app2 = 0x000;
    header->offset = _size_struct;
}

void make_bmp_info_header(bmp_info_header_t *header, size_t size)
{
    header->size = sizeof(bmp_info_header_t);
    header->width = size;
    header->height = size;
    header->planes = 1;
    header->bpp = 32;
    header->compression = 0;
    header->raw_data_size = size * size * 4;
    header->h_resolution = 0;
    header->v_resolution = 0;
    header->palette_size = 0;
    header->important_color = 0;
}

