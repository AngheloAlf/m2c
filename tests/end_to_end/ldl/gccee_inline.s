.align 3
glabel UpdateEffectorTranslateDriver__Q26choreo11FootBlenderPQ26choreo15FootBlendDriverfi
    /* 1AA3C8 002AA3C8 F0FFBD27 */  addiu       $sp, $sp, -0x10
    /* 1AA3CC 002AA3CC 2D108000 */  daddu       $v0, $a0, $zero
    /* 1AA3D0 002AA3D0 0000BF7F */  sq          $ra, 0x0($sp)
    /* 1AA3D4 002AA3D4 4800033C */  lui         $v1, %hi(D_0047FFD8 + 0x7)
    /* 1AA3D8 002AA3D8 2D20A000 */  daddu       $a0, $a1, $zero
    /* 1AA3DC 002AA3DC EC004924 */  addiu       $t1, $v0, 0xEC
    /* 1AA3E0 002AA3E0 F000478C */  lw          $a3, 0xF0($v0)
    /* 1AA3E4 002AA3E4 DFFF6568 */  ldl         $a1, %lo(D_0047FFD8 + 0x7)($v1)
    /* 1AA3E8 002AA3E8 D8FF656C */  ldr         $a1, %lo(D_0047FFD8)($v1)
    /* 1AA3EC 002AA3EC A0AA0A0C */  jal         BlendDriverNoContext__H2ZQ218RadicalMathLibrary6VectorZQ26choreo15FootBlendDriver_6choreoPX11PMX11CFPCX11RX01_vfiPQ26choreot13BlendPriority1ZX01iRi_v
    /* 1AA3F0 002AA3F0 E800488C */   lw         $t0, 0xE8($v0)
    /* 1AA3F4 002AA3F4 0000BF7B */  lq          $ra, 0x0($sp)
    /* 1AA3F8 002AA3F8 0800E003 */  jr          $ra
    /* 1AA3FC 002AA3FC 1000BD27 */   addiu      $sp, $sp, 0x10
endlabel UpdateEffectorTranslateDriver__Q26choreo11FootBlenderPQ26choreo15FootBlendDriverfi
.size UpdateEffectorTranslateDriver__Q26choreo11FootBlenderPQ26choreo15Foot