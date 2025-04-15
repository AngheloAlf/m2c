/* Simplified code from IDO 7.1 ld */
/* Original addresses preserved in case anybody wants to take a look */

glabel whatever
    /* 070018 10070018 6B88DF64 */  ldl         $t0, %gp_rel(B_100A695C)($gp)
    /* 07001C 1007001C 6F88DF6B */  ldr         $t0, %gp_rel(B_100A695C+0x7)($gp)
    /* 070024 10070024 0008443E */   dsrl32     $t0, $t0, 16

    /* 0702FC 100702FC 8F89DF74 */  lw          $t1, %gp_rel(addend..PHF)($gp)
    /* 070300 10070300 01284821 */  addu        $t1, $t1, $t0
    /* 070308 10070308 AF89DF74 */   sw         $t1, %gp_rel(addend..PHF)($gp)

    /* 071648 10071648 03E00008 */  jr          $ra
                                     nop
