/*
 * Copyright (c) 2016, Alliance for Open Media. All rights reserved
 *
 * This source code is subject to the terms of the BSD 2 Clause License and
 * the Alliance for Open Media Patent License 1.0. If the BSD 2 Clause License
 * was not distributed with this source code in the LICENSE file, you can
 * obtain it at www.aomedia.org/license/software. If the Alliance for Open
 * Media Patent License 1.0 was not distributed with this source code in the
 * PATENTS file, you can obtain it at www.aomedia.org/license/patent.
 */
#ifndef AV1_GRAIN_TEST_VECTORS_H_
#define AV1_GRAIN_TEST_VECTORS_H_

/* Test vectors for emulation of different film grain types.
 * Note that bit depth would be derived from the bitstream and
 * not signaled in film grain metadata. The parameters are valid
 * for any bit depth.
 */
static aom_film_grain_t film_grain_test_vectors[16] = {
  /* Test 1 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      { { 16, 0 },
        { 25, 136 },
        { 33, 144 },
        { 41, 160 },
        { 48, 168 },
        { 56, 136 },
        { 67, 128 },
        { 82, 144 },
        { 97, 152 },
        { 113, 144 },
        { 128, 176 },
        { 143, 168 },
        { 158, 176 },
        { 178, 184 } },
      14 /* num_points_y */,
      { { 16, 0 },
        { 20, 64 },
        { 28, 88 },
        { 60, 104 },
        { 90, 136 },
        { 105, 160 },
        { 134, 168 },
        { 168, 208 } },
      8 /* num_cb_points */,
      { { 16, 0 },
        { 28, 96 },
        { 56, 80 },
        { 66, 96 },
        { 80, 104 },
        { 108, 96 },
        { 122, 112 },
        { 137, 112 },
        { 169, 176 } },
      9 /* num_cr_points */,
      11 /* scaling_shift */,
      2 /* ar_coeff_lag */,
      { 0, 0, -58, 0, 0, 0, -76, 100, -43, 0, -51, 82 },
      { 0, 0, -49, 0, 0, 0, -36, 22, -30, 0, -38, 7, 39 },
      { 0, 0, -47, 0, 0, 0, -31, 31, -25, 0, -32, 13, -100 },
      8 /* ar_coeff_shift */,
      247 /* cb_mult */,
      192 /* cb_luma_mult */,
      18 /* cb_offset */,
      229 /* cr_mult */,
      192 /* cr_luma_mult */,
      54 /* cr_offset */,
      0 /* overlap_flag */,
      1 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /* chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
  /* Test 2 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      { { 0, 96 }, { 255, 96 } },
      2 /* num_points_y */,
      { { 0, 64 }, { 255, 64 } },
      2 /* num_cb_points */,
      { { 0, 64 }, { 255, 64 } },
      2 /* num_cr_points */,
      11 /* scaling_shift */,
      3 /* ar_coeff_lag */,
      {
          4, 1,   3, 0,   1,  -3, 8,  -3, 7,  -23, 1, -25,
          0, -10, 6, -17, -4, 53, 36, 5,  -5, -17, 8, 66,
      },
      {
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0,
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
      },
      {
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0,
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
      },
      7 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      0 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
  /* Test 3 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      { { 0, 96 }, { 255, 96 } },
      2 /* num_points_y */,
      { { 0, 64 }, { 255, 64 } },
      2 /* num_cb_points */,
      { { 0, 64 }, { 255, 64 } },
      2 /* num_cr_points */,
      11 /* scaling_shift */,
      3 /* ar_coeff_lag */,
      {
          4, 1,   3, 0,   1,  -3, 8,  -3, 7,  -23, 1, -25,
          0, -10, 6, -17, -4, 53, 36, 5,  -5, -17, 8, 66,
      },
      {
          4,   -7, 2,  4,   12, -12, 5,   -8, 6,  8,   -19, -16, 19,
          -10, -2, 17, -42, 58, -2,  -13, 9,  14, -36, 67,  0,
      },
      {
          4,   -7, 2,  4,   12, -12, 5,   -8, 6,  8,   -19, -16, 19,
          -10, -2, 17, -42, 58, -2,  -13, 9,  14, -36, 67,  0,
      },
      7 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      1 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
  /* Test 4 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      {
          { 16, 0 },
          { 24, 137 },
          { 53, 146 },
          { 63, 155 },
          { 78, 155 },
          { 107, 150 },
          { 122, 147 },
          { 136, 147 },
          { 166, 153 },
      },
      9 /* num_points_y */,
      {
          { 16, 0 },
          { 20, 72 },
          { 27, 82 },
          { 33, 91 },
          { 69, 121 },
          { 95, 143 },
          { 108, 154 },
          { 134, 169 },
          { 147, 177 },
      },
      9 /* num_cb_points */,
      {
          { 16, 0 },
          { 24, 95 },
          { 54, 93 },
          { 65, 94 },
          { 79, 98 },
          { 109, 107 },
          { 124, 119 },
          { 139, 136 },
          { 169, 170 },
      },
      9 /* num_cr_points */,
      11 /* scaling_shift */,
      3 /* ar_coeff_lag */,
      {
          7,  -9,  2, 4,   7, -12, 7,  -18, 18, -30, -27, -42,
          13, -20, 7, -18, 6, 107, 55, -2,  -4, -9,  -22, 113,
      },
      {
          -3, -1, -4,  3,   -6,  -2,  3,  1,  -4, -10, -10, -5, -5,
          -3, -1, -13, -28, -25, -31, -6, -4, 14, -64, 66,  0,
      },
      {
          0,  4, -3, 13,  0,  1,   -3, 0,  -3, -10, -68, -4, -2,
          -5, 2, -3, -20, 62, -31, 0,  -4, -1, -8,  -29, 0,
      },
      8 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      0 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
  /* Test 5 */
  {
      1 /* apply_grain */,
      0 /* update_parameters */,
      { { 0, 64 }, { 255, 64 } },
      2 /* num_points_y */,
      {
          { 0, 96 },
          { 32, 90 },
          { 64, 83 },
          { 96, 76 },
          { 128, 68 },
          { 159, 59 },
          { 191, 48 },
          { 223, 34 },
          { 255, 0 },
      },
      9 /* num_cb_points */,
      {
          { 0, 0 },
          { 32, 34 },
          { 64, 48 },
          { 96, 59 },
          { 128, 68 },
          { 159, 76 },
          { 191, 83 },
          { 223, 90 },
          { 255, 96 },
      },
      9 /* num_cr_points */,
      11 /* scaling_shift */,
      3 /* ar_coeff_lag */,
      {
          4, 1,   3, 0,   1,  -3, 8,  -3, 7,  -23, 1, -25,
          0, -10, 6, -17, -4, 53, 36, 5,  -5, -17, 8, 66,
      },
      {
          -2, 2,  -5, 7,   -6, 4,   -2, -1, 1,  -2,  0,  -2, 2,
          -3, -5, 13, -13, 6,  -14, 8,  -1, 18, -36, 58, 0,
      },
      {
          -2, -1, -3, 14, -4, -1, -3, 0, -1, 7, -31, 7, 2,
          0,  1,  0,  -7, 50, -8, -2, 2, 2,  2, -4,  0,
      },
      7 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      1 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      1063 /* random_seed */
  },
  /* Test 6 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      {
          { 0, 96 },
          { 20, 92 },
          { 39, 88 },
          { 59, 84 },
          { 78, 80 },
          { 98, 75 },
          { 118, 70 },
          { 137, 65 },
          { 157, 60 },
          { 177, 53 },
          { 196, 46 },
          { 216, 38 },
          { 235, 27 },
          { 255, 0 },
      },
      14 /* num_points_y */,
      {},
      0 /* num_cb_points */,
      {},
      0 /* num_cr_points */,
      11 /* scaling_shift */,
      3 /* ar_coeff_lag */,
      {
          4, 1,   3, 0,   1,  -3, 8,  -3, 7,  -23, 1, -25,
          0, -10, 6, -17, -4, 53, 36, 5,  -5, -17, 8, 66,
      },
      {
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      },
      {
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      },
      7 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      1 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      2754 /* random_seed */
  },
  /* Test 7 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      {
          { 0, 0 },
          { 20, 27 },
          { 39, 38 },
          { 59, 46 },
          { 78, 53 },
          { 98, 60 },
          { 118, 65 },
          { 137, 70 },
          { 157, 75 },
          { 177, 80 },
          { 196, 84 },
          { 216, 88 },
          { 235, 92 },
          { 255, 96 },
      },
      14 /* num_points_y */,
      { { 0, 0 }, { 255, 0 } },
      2 /* num_cb_points */,
      { { 0, 0 }, { 255, 0 } },
      2 /* num_cr_points */,
      11 /* scaling_shift */,
      3 /* ar_coeff_lag */,
      {
          4, 1,   3, 0,   1,  -3, 8,  -3, 7,  -23, 1, -25,
          0, -10, 6, -17, -4, 53, 36, 5,  -5, -17, 8, 66,
      },
      {
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      },
      {
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      },
      7 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      1 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
  /* Test 8 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      { { 0, 96 }, { 255, 96 } },
      2 /* num_points_y */,
      { { 0, 62 }, { 255, 62 } },
      2 /* num_cb_points */,
      { { 0, 62 }, { 255, 62 } },
      2 /* num_cr_points */,
      11 /* scaling_shift */,
      3 /* ar_coeff_lag */,
      {
          4, 1,   3, 0,   1,  -3, 8,  -3, 7,  -23, 1, -25,
          0, -10, 6, -17, -4, 53, 36, 5,  -5, -17, 8, 66,
      },
      {
          0,  -2, -2, 8,   5,  -1, 1,   -1, 5,  16,  -33, -9,  6,
          -1, -3, 10, -47, 63, 0,  -15, 3,  11, -42, 75,  -69,
      },
      {
          1,  -1, -1, 9,   5,  0, 1,   -1, 5,  15,  -32, -10, 8,
          -2, -4, 11, -46, 62, 1, -16, 3,  13, -43, 75,  -55,
      },
      7 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      0 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
  /* Test 9 */
  {
      1 /* apply_grain */,
      0 /* update_parameters */,
      { { 0, 48 }, { 255, 48 } },
      2 /* num_points_y */,
      { { 0, 32 }, { 255, 32 } },
      2 /* num_cb_points */,
      { { 0, 32 }, { 255, 32 } },
      2 /* num_cr_points */,
      10 /* scaling_shift */,
      2 /* ar_coeff_lag */,
      { 10, -30, -20, -39, 1, -24, 12, 103, 60, -9, -24, 113 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127 },
      8 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      0 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
  /* Test 10 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      { { 0, 48 }, { 255, 48 } },
      2 /* num_points_y */,
      { { 0, 32 }, { 255, 32 } },
      2 /* num_cb_points */,
      { { 0, 32 }, { 255, 32 } },
      2 /* num_cr_points */,
      10 /* scaling_shift */,
      2 /* ar_coeff_lag */,
      { 10, -30, -20, -39, 1, -24, 12, 103, 60, -9, -24, 113 },
      { -7, -6, -48, -22, 2, -3, -45, 73, -11, -26, -52, 76, 0 },
      { -7, -6, -48, -22, 2, -3, -45, 73, -11, -26, -52, 76, 0 },
      8 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      0 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
  /* Test 11 */
  {
      1 /* apply_grain */,
      0 /* update_parameters */,
      { { 0, 32 }, { 255, 32 } },
      2 /* num_points_y */,
      {
          { 0, 48 },
          { 32, 45 },
          { 64, 42 },
          { 96, 38 },
          { 128, 34 },
          { 159, 29 },
          { 191, 24 },
          { 223, 17 },
          { 255, 0 },
      },
      9 /* num_cb_points */,
      {
          { 0, 0 },
          { 32, 17 },
          { 64, 24 },
          { 96, 29 },
          { 128, 34 },
          { 159, 38 },
          { 191, 42 },
          { 223, 45 },
          { 255, 48 },
      },
      9 /* num_cr_points */,
      10 /* scaling_shift */,
      3 /* ar_coeff_lag */,
      {
          7,  -9,  2, 4,   7, -12, 7,  -18, 18, -30, -27, -42,
          13, -20, 7, -18, 6, 107, 55, -2,  -4, -9,  -22, 113,
      },
      {
          -3, -1, -4,  3,   -6,  -2,  3,  1,  -4, -10, -10, -5, -5,
          -3, -1, -13, -28, -25, -31, -6, -4, 14, -64, 66,  0,
      },
      {
          0,  4, -3, 13,  0,  1,   -3, 0,  -3, -10, -68, -4, -2,
          -5, 2, -3, -20, 62, -31, 0,  -4, -1, -8,  -29, 0,
      },
      8 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      1 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      1357 /* random_seed */
  },
  /* Test 12 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      {
          { 16, 0 },
          { 24, 49 },
          { 39, 69 },
          { 46, 84 },
          { 53, 91 },
          { 63, 100 },
          { 78, 114 },
          { 92, 134 },
          { 164, 139 },
      },
      9 /* num_points_y */,
      {
          { 16, 0 },
          { 20, 31 },
          { 26, 42 },
          { 33, 54 },
          { 40, 65 },
          { 47, 72 },
          { 56, 85 },
          { 84, 123 },
          { 152, 157 },
      },
      9 /* num_cb_points */,
      {
          { 16, 0 },
          { 25, 14 },
          { 39, 33 },
          { 47, 40 },
          { 54, 47 },
          { 64, 62 },
          { 79, 76 },
          { 94, 83 },
          { 167, 101 },
      },
      9 /* num_cr_points */,
      10 /* scaling_shift */,
      2 /* ar_coeff_lag */,
      { 0, 0, -58, 0, 0, 0, -76, 100, -43, 0, -51, 82 },
      { 0, 0, -49, 0, 0, 0, -36, 22, -30, 0, -38, 7, 39 },
      { 0, 0, -47, 0, 0, 0, -31, 31, -25, 0, -32, 13, -100 },
      8 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      0 /* overlap_flag */,
      0 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
  /* Test 13 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      {
          { 0, 48 },
          { 20, 46 },
          { 39, 44 },
          { 59, 42 },
          { 78, 40 },
          { 98, 38 },
          { 118, 35 },
          { 137, 33 },
          { 157, 30 },
          { 177, 27 },
          { 196, 23 },
          { 216, 19 },
          { 235, 13 },
          { 255, 0 },
      },
      14 /* num_points_y */,
      { { 0, 0 }, { 255, 0 } },
      0 /* num_cb_points */,
      { { 0, 0 }, { 255, 0 } },
      0 /* num_cr_points */,
      10 /* scaling_shift */,
      2 /* ar_coeff_lag */,
      { 10, -30, -20, -39, 1, -24, 12, 103, 60, -9, -24, 113 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
      8 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      0 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
  /* Test 14 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      {
          { 0, 0 },
          { 20, 13 },
          { 39, 19 },
          { 59, 23 },
          { 78, 27 },
          { 98, 30 },
          { 118, 33 },
          { 137, 35 },
          { 157, 38 },
          { 177, 40 },
          { 196, 42 },
          { 216, 44 },
          { 235, 46 },
          { 255, 48 },
      },
      14 /* num_points_y */,
      { { 0, 0 }, { 255, 0 } },
      0 /* num_cb_points */,
      { { 0, 0 }, { 255, 0 } },
      0 /* num_cr_points */,
      10 /* scaling_shift */,
      2 /* ar_coeff_lag */,
      { 10, -30, -20, -39, 1, -24, 12, 103, 60, -9, -24, 113 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
      8 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      1 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
  /* Test 15 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      { { 0, 96 }, { 255, 96 } },
      1 /* num_points_y */,
      { { 0, 96 }, { 255, 96 } },
      0 /* num_cb_points */,
      { { 0, 96 }, { 255, 96 } },
      0 /* num_cr_points */,
      11 /* scaling_shift */,
      2 /* ar_coeff_lag */,
      { 5, -15, -10, -19, 0, -12, 6, 51, 30, -5, -12, 56 },
      { 2, 2, -24, -5, 1, 1, -18, 37, -2, 0, -15, 39, -70 },
      { 2, 3, -24, -5, -1, 0, -18, 38, -2, 0, -15, 39, -55 },
      7 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      0 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      1 /*chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
  /* Test 16 */
  {
      1 /* apply_grain */,
      1 /* update_parameters */,
      {
          { 16, 0 },
          { 58, 126 },
          { 87, 120 },
          { 97, 122 },
          { 112, 125 },
          { 126, 131 },
          { 141, 139 },
          { 199, 153 },
      },
      8 /* num_points_y */,
      {
          { 16, 0 },
          { 59, 68 },
          { 66, 76 },
          { 73, 82 },
          { 79, 85 },
          { 86, 86 },
          { 151, 95 },
          { 192, 101 },
      },
      8 /* num_cb_points */,
      {
          { 16, 0 },
          { 59, 64 },
          { 89, 80 },
          { 99, 86 },
          { 114, 90 },
          { 129, 93 },
          { 144, 97 },
          { 203, 85 },
      },
      8 /* num_cr_points */,
      11 /* scaling_shift */,
      3 /* ar_coeff_lag */,
      {
          4, 1,   3, 0,   1,  -3, 8,  -3, 7,  -23, 1, -25,
          0, -10, 6, -17, -4, 53, 36, 5,  -5, -17, 8, 66,
      },
      {
          0,  -2, -2, 8,   5,  -1, 1,   -1, 5,  16,  -33, -9,  6,
          -1, -3, 10, -47, 63, 0,  -15, 3,  11, -42, 75,  -69,
      },
      {
          1,  -1, -1, 9,   5,  0, 1,   -1, 5,  15,  -32, -10, 8,
          -2, -4, 11, -46, 62, 1, -16, 3,  13, -43, 75,  -55,
      },
      7 /* ar_coeff_shift */,
      128 /* cb_mult */,
      192 /* cb_luma_mult */,
      256 /* cb_offset */,
      128 /* cr_mult */,
      192 /* cr_luma_mult */,
      256 /* cr_offset */,
      1 /* overlap_flag */,
      0 /* clip_to_restricted_range */,
      8 /* bit_depth */,
      0 /*chroma_scaling_from_luma*/,
      45231 /* random_seed */
  },
};
#endif  // AV1_GRAIN_TEST_VECTORS_H_
