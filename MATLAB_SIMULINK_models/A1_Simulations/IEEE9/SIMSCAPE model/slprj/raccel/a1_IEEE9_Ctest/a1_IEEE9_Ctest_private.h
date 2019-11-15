#include "__cf_a1_IEEE9_Ctest.h"
#ifndef RTW_HEADER_a1_IEEE9_Ctest_private_h_
#define RTW_HEADER_a1_IEEE9_Ctest_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "a1_IEEE9_Ctest.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
extern void rt_invd6x6_snf ( const real_T u [ 36 ] , real_T y [ 36 ] ) ;
extern real_T look1_pbinlxpw ( real_T u0 , const real_T bp0 [ ] , const
real_T table [ ] , uint32_T prevIndex [ ] , uint32_T maxIndex ) ; extern void
sfun_psbdqc ( SimStruct * rts ) ; extern void emxfb3k3z5 ( SimStruct * rtS_p
, norupa124f * localDW ) ; extern void kiwunxbxxy ( norupa124f * localDW ) ;
extern void pu5sgumjsd ( SimStruct * rtS_e , real_T ljykjrkdhd , real_T
eovmy1dz1a , c0os3n2udc * localB , norupa124f * localDW , eachi032pd * localP
) ; extern void lcz2v1utwa ( SimStruct * rtS_m , j2ja1y5ept * localDW ) ;
extern void kdayvjhiz0 ( j2ja1y5ept * localDW ) ; extern void brervxhrpp (
SimStruct * rtS_i , real_T nxdpasjpty , real_T p5lenye1vq , jjc0whid3j *
localB , j2ja1y5ept * localDW , h54kqyhffp * localP ) ; extern void
c1f43dj3uj ( SimStruct * rtS_g , h0x5eljdlc * localDW ) ; extern void
ftudftfqim ( h0x5eljdlc * localDW ) ; extern void p5n4z0qa43 ( SimStruct *
rtS_p , real_T h5rhfyrbi2 , real_T calg5jqcpq , i4jp2mcstd * localB ,
h0x5eljdlc * localDW , atjhtdxhdy * localP ) ; extern void ild0b0civf (
SimStruct * rtS_f , bnirstufzs * localDW ) ; extern void excr52sq15 (
bnirstufzs * localDW ) ; extern void n12bdjrzo2 ( SimStruct * rtS_m , real_T
dnr03ncv4b , real_T d03xc203bo , iviovo42s2 * localB , bnirstufzs * localDW ,
bm5yxkrmv5 * localP ) ; extern void gk2gtbji30 ( SimStruct * rtS_k ,
lz11a3yp4s * localDW ) ; extern void aua1srupyo ( lz11a3yp4s * localDW ) ;
extern void nwwecupcxr ( SimStruct * rtS_c , real_T jirmxdrqxb , real_T
n1xbq2kjrz , maz5funpmi * localB , lz11a3yp4s * localDW , mzjp5csrva * localP
) ; extern void hpbcf1hh3a ( SimStruct * rtS_p , lwxg4jpr3i * localDW ) ;
extern void d142zvdjg5 ( lwxg4jpr3i * localDW ) ; extern void eaz24jybta (
SimStruct * rtS_c , real_T j20jxgvq1h , real_T pxs0dtdbxq , gzx1acbj4v *
localB , lwxg4jpr3i * localDW , k5yxld1yx1 * localP ) ; extern void
jpeuaygsuk ( p3ijwzzkfi * localB , etvxweu2x5 * localP , fv54ow1i3z * localX
) ; extern void cmznlkl0l4 ( SimStruct * rtS_g , bnbhtzzh0a * localDW ,
jlvgnnbv0g * localXdis ) ; extern void poqjqkgoym ( p3ijwzzkfi * localB ,
bnbhtzzh0a * localDW , m4nuliemhl * localXdot ) ; extern void f51d0wufen (
p3ijwzzkfi * localB , bnbhtzzh0a * localDW , etvxweu2x5 * localP ) ; extern
void eecdtyu2lc ( SimStruct * rtS_m , boolean_T lrjyga1ump , real_T
nnt0wqgkqu , real_T ajqfl5hzih , real_T lltwkd4cpz , real_T hw5v4cmndv ,
real_T ea01ln4dp2 , p3ijwzzkfi * localB , bnbhtzzh0a * localDW , etvxweu2x5 *
localP , fv54ow1i3z * localX , real_T rtp_N , jlvgnnbv0g * localXdis ) ;
extern void eecdtyu2lcTID4 ( SimStruct * rtS_n , bnbhtzzh0a * localDW ) ;
extern void jjji3qywjw ( itapaapw2y * localB , goxfauiosk * localP ,
lemzsljfxi * localX ) ; extern void atxrch0hdu ( SimStruct * rtS_d ,
jgsqdkjxle * localDW , gpeibc1iz2 * localXdis ) ; extern void pzpykrvmdl (
real_T mrpb3vv5ph , jgsqdkjxle * localDW , goxfauiosk * localP , lemzsljfxi *
localX , puchu13zo3 * localXdot ) ; extern void j1dndejvu3 ( itapaapw2y *
localB , jgsqdkjxle * localDW , goxfauiosk * localP ) ; extern void
cfxuytlxuw ( SimStruct * rtS_l , boolean_T fu3my0jc3b , itapaapw2y * localB ,
jgsqdkjxle * localDW , goxfauiosk * localP , lemzsljfxi * localX , gpeibc1iz2
* localXdis ) ; extern void o5n5elxdxc ( nm45ujaypf * localP , jwoppf1s1t *
localX ) ; extern void jglthweouv ( SimStruct * rtS_o , hgpoxvgvmn * localDW
, i3dogwilm3 * localXdis ) ; extern void eqqqipz3sc ( jx0ulpnvrr * localB ,
hgpoxvgvmn * localDW , hjdigkutaj * localXdot ) ; extern void p1ntdzf2ir (
jx0ulpnvrr * localB , hgpoxvgvmn * localDW , mbi1khccur * localZCSV ) ;
extern void fmeu431hwa ( hgpoxvgvmn * localDW ) ; extern void i3kxfqtdpb (
SimStruct * rtS_n , real_T nfv4uomazo , const real_T fiw3e0y1hy [ 6 ] ,
jx0ulpnvrr * localB , hgpoxvgvmn * localDW , nm45ujaypf * localP , jwoppf1s1t
* localX , i3dogwilm3 * localXdis ) ; extern void i3kxfqtdpbTID4 ( SimStruct
* rtS_b , hgpoxvgvmn * localDW ) ; extern void d2rews4rry ( SimStruct *
rtS_kt , ffedy0f3nw * localDW ) ; extern void aiyjfcdcgo ( ffedy0f3nw *
localDW ) ; extern void ef3bwkvl4e ( SimStruct * rtS_lt , real_T khlumm2aqc ,
real_T on0rfcpfjx , mky4wgoovg * localB , ffedy0f3nw * localDW ) ; extern
void khd1002t2x ( SimStruct * rtS_pj ) ; extern void pnow1l4kyo ( SimStruct *
rtS_ap ) ; extern void n1lfiimiby ( SimStruct * rtS_po , real_T fmz5jwugbd ,
real_T bcu4phbam0 , awbgcbrtew * localB ) ; extern void kz5gtnsahb (
ncv4ywdvgw * localB , eaxkoxenm5 * localP ) ; extern void n2esxjfgsp (
SimStruct * rtS_d0 ) ; extern void ltcbsbpito ( SimStruct * rtS_pk ,
ncv4ywdvgw * localB , eaxkoxenm5 * localP ) ; extern void agyrpuacxw (
SimStruct * rtS_kh , real_T gb4054edpb , real_T n3ich25dpv , ncv4ywdvgw *
localB ) ; extern void kev2z1swdg ( c24jiyudwc * localB , alg0v0bidu * localP
) ; extern void mxyuoe1l2f ( SimStruct * rtS_m4 ) ; extern void j1cwalzf33 (
SimStruct * rtS_fv , c24jiyudwc * localB , alg0v0bidu * localP ) ; extern
void okacab3hem ( SimStruct * rtS_nf , real_T gte5alvamk , real_T g3glbw5d5r
, c24jiyudwc * localB ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
