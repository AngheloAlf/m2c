.align 3
glabel fillLineBuffer__20DialogSoundDebugPageiPc
    /* 135C28 00235C28 2D38A000 */  daddu       $a3, $a1, $zero
    /* 135C2C 00235C2C F0FFBD27 */  addiu       $sp, $sp, -0x10
    /* 135C30 00235C30 0000BF7F */  sq          $ra, 0x0($sp)
    /* 135C34 00235C34 0D00E22C */  sltiu       $v0, $a3, 0xD
    /* 135C38 00235C38 26004010 */  beqz        $v0, .L00235CD4
    /* 135C3C 00235C3C 2D28C000 */   daddu      $a1, $a2, $zero

    /* 135CA4 00235CA4 4700023C */  lui         $v0, %hi(D_00473738)
    /* 135CA8 00235CA8 38374724 */  addiu       $a3, $v0, %lo(D_00473738)
    /* 135CAC 00235CAC 0700E368 */  ldl         $v1, 0x7($a3)
    /* 135CB0 00235CB0 0000E36C */  ldr         $v1, 0x0($a3)
    /* 135CB4 00235CB4 0700A3B0 */  sdl         $v1, 0x7($a1)
    /* 135CB8 00235CB8 0000A3B4 */  sdr         $v1, 0x0($a1)

    /* 135CC0 00235CC0 0000BF7B */   lq         $ra, 0x0($sp)

  .L00235CD4:
    /* 135CDC 00235CDC 0800E003 */  jr          $ra
    /* 135CE0 00235CE0 1000BD27 */   addiu      $sp, $sp, 0x10
endlabel fillLineBuffer__20DialogSoundDebugPageiPc
.size fillLineBuffer__20DialogSoundDebugPageiPc, . - fillLineBuffer__20DialogSoundDebugPageiPc
