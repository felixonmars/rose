/*
  Test vectorization for simple arithemetic statements.
*/
#include "rose_simd.h" 

int main()
{
  int i_nom_1_strip_9;
  int i_nom_1;
  float a[16UL];
  __SIMD *a_SIMD = (__SIMD *)a;
  float tmp;
  __SIMD tmp_SIMD;
  int n = 16;
  __SIMDi n_SIMD;
  
#pragma SIMD
  __SIMD __constant0__ = _SIMD_splats_ps(0.f);
  void *cmpReturn_11;
  tmp_SIMD = _SIMD_splats_ps(tmp);
  n_SIMD = _SIMD_splats_epi32(n);
  for (i_nom_1 = 0, i_nom_1_strip_9 = i_nom_1; i_nom_1 <= n - 1; (i_nom_1 += 4 , i_nom_1_strip_9 += 1)) {
/* if statement is converted into vectorizaed conditional statement */
    _SIMD_cmpeq_ps(tmp_SIMD,__constant0__,&cmpReturn_11);
    a_SIMD[i_nom_1_strip_9] = _SIMD_sel_ps(a_SIMD[i_nom_1_strip_9],__constant0__,&cmpReturn_11);
  }
  return 0;
}
