? error(?, ?, u32, s32);                            /* extern */
extern s8 B_100A695C;
extern s8 B_100A695D;
extern ? B_100A695E;
extern ? B_100A6962;
extern s32 B_100A6990;
extern ? R_STR_10095AD8;
extern s32 addend..PHF;
extern u32 gp_overflow;
extern ? option;
extern ? thisfile..CNC;

s32 func_10072EAC(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s64 sp28;
    s64 sp20;
    s64 sp18;
    u32 sp0;
    s32 temp_v0;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s64 temp_a2_2;
    s8 var_at;
    u32 temp_a2;
    u32 temp_a3;
    u32 var_t2;
    u32 var_v0;

    var_s0 = arg0;
    var_s1 = 0;
    switch (arg1) {
    case 2:
    case 32:
        var_s0 = addend..PHF + (var_s0 << 0);
        if (arg2 == 0) {
            B_100A695E = (unaligned s32) var_s0;
        }
        break;
    case 4:
        var_s0 = addend..PHF + (var_s0 << 0);
        if (arg2 == 0) {
            if (((var_s0 << 0) & 0xF0000000) == ((B_100A6990 + 4) & 0xF0000000)) {
                temp_a2 = B_100A6990 & 0x0FFFFFFF;
                sp28 = 0;
                if (temp_a2 >= 0x0FFFFFF0U) {
                    error(2, 0x41, temp_a2, B_100A6990);
                }
                goto block_9;
            }
            if (1 == 0) {
block_9:
                B_100A695E = (unaligned s32) (((unaligned s32) B_100A695E & 0xFC000000) | (((u32) (var_s0 << 0) >> 2) & 0x03FFFFFF));
            } else {
                var_s1 = 4;
            }
        }
        break;
    case 9:
    case 11:
    case 19:
    case 20:
        if (((u32) (option.unk4 & 0x7FFFFF) >> 0x13) != 1) {
            var_s0 = addend..PHF + (var_s0 << 0);
            if (arg2 == 0) {
                if (((var_s0 << 0) < -0x8000) || ((var_s0 << 0) > 0x7FFF)) {
                    var_s1 = 6;
                }
                B_100A695E = (unaligned s32) ((M2C_ERROR(/* Unable to handle lwr; missing a corresponding lwl */) & 0xFFFF0000) | ((var_s0 << 0) & 0xFFFF));
            }
        } else {
block_23:
            var_s0 = addend..PHF + (var_s0 << 0);
            if (arg2 == 0) {
                B_100A695E = (unaligned s32) (((unaligned s32) B_100A695E & 0xFFFF0000) | (((u32) ((var_s0 << 0) + 0x8000) >> 0x10) & 0xFFFF));
            }
        }
        break;
    case 5:
        goto block_23;
    case 21:
        var_s0 = addend..PHF + (var_s0 << 0);
        if (arg2 == 0) {
            B_100A695E = (unaligned s32) (((unaligned s32) B_100A695E & 0xFFFF0000) | ((var_s0 << 0) & 0xFFFF));
        }
        break;
    case 6:
    case 23:
    case 31:
        var_s0 = (var_s0 << 0) + ((s64) ((s64) addend..PHF << 0x30) >> 0x30);
        if (arg2 == 0) {
            B_100A695E = (unaligned s32) (((unaligned s32) B_100A695E & 0xFFFF0000) | ((var_s0 << 0) & 0xFFFF));
        }
        break;
    case 7:
    case 8:
        var_s0 = (addend..PHF + (var_s0 << 0)) - arg3;
        if (arg2 == 0) {
            if ((var_s0 << 0) < -0x8000) {
                var_v0 = -0x8000 - (var_s0 << 0);
                var_s1 = 5;
                if ((u32) gp_overflow < var_v0) {
                    goto block_35;
                }
            } else if ((var_s0 << 0) > 0x7FFF) {
                var_v0 = (var_s0 << 0) - 0x7FFF;
                var_s1 = 5;
                if ((u32) gp_overflow < var_v0) {
block_35:
                    gp_overflow = var_v0;
                }
            }
            B_100A695E = (unaligned s32) (((unaligned s32) B_100A695E & 0xFFFF0000) | ((var_s0 << 0) & 0xFFFF));
        }
        break;
    case 12:
        var_s0 = (var_s0 << 0) + (addend..PHF - arg3);
        if (arg2 == 0) {
            B_100A695E = (unaligned s32) var_s0;
        }
        break;
    case 18:
        var_s0 = (addend..PHF + ((u64) ((var_s0 << 0) << 0x20) >> 0x20)) << 0;
        if (arg2 == 0) {
            B_100A6962 = (unaligned s64) var_s0;
        }
        break;
    case 24:
        var_s0 = (((u64) ((var_s0 << 0) << 0x20) >> 0x20) - addend..PHF) << 0;
        if (arg2 == 0) {
            B_100A6962 = (unaligned s64) var_s0;
        }
        break;
    case 1:
        var_s0 = ((s64) ((s64) addend..PHF << 0x30) >> 0x30) + (((u64) (unaligned s64) B_100A695C >> 0x30) + (var_s0 << 0));
        if (arg2 == 0) {
            B_100A695E = (unaligned s32) var_s0;
            if (((var_s0 << 0) < -0x8000) || (var_at = var_s0 << 0, (((var_s0 << 0) > 0x7FFF) != 0))) {
                var_s1 = 2;
                var_at = var_s0 << 0;
            }
            B_100A695D = var_at;
            B_100A695C = (s8) (var_at >> 8);
        }
        break;
    case 22:
    case 30:
        var_s0 = addend..PHF + (var_s0 << 0);
        if (arg2 == 0) {
            B_100A695E = (unaligned s32) (((unaligned s32) B_100A695E & 0xFFFF0000) | (((u32) ((var_s0 << 0) + 0x8000) >> 0x10) & 0xFFFF));
        }
        break;
    case 28:
        var_s0 = addend..PHF + (var_s0 << 0);
        if (arg2 == 0) {
            B_100A695E = (unaligned s32) (((u64) (((unaligned s32) B_100A695E & 0xFFFF0000) << 0x20) >> 0x20) | (((s64) (((u64) ((var_s0 << 0) << 0x20) >> 0x20) + ((0x8000 << 0x10) | 0x8000)) >> 0x20) & 0xFFFF));
        }
        break;
    case 29:
        var_s0 = addend..PHF + (var_s0 << 0);
        if (arg2 == 0) {
            B_100A695E = (unaligned s32) (((u64) (((unaligned s32) B_100A695E & 0xFFFF0000) << 0x20) >> 0x20) | (((s64) (((u64) ((var_s0 << 0) << 0x20) >> 0x20) + ((0x10001 << 0x1F) | 0x8000)) >> 0x30) & 0xFFFF));
        }
        break;
    case 35:
        if (((u32) (option.unk85C & 0x7FFFFF) >> 0x13) == 0) {
            temp_v0 = B_100A6990;
            temp_a3 = (unaligned s32) B_100A695E;
            temp_a2_2 = addend..PHF + (var_s0 << 0);
            var_t2 = temp_a3;
            if (((temp_a3 >> 0x1A) != 0) || (var_a3 = temp_a2_2 - temp_v0, ((temp_a3 & 0x3F) != 9))) {
                sp20 = (s64) temp_v0;
                sp0 = var_t2;
                sp18 = temp_a2_2;
                error(1, 2, (u32) &thisfile..CNC, (s32) &R_STR_10095AD8);
                var_a3 = temp_a2_2 - temp_v0;
            }
            if ((var_a3 >= -0x7FFC) && (var_a3 <= 0x8003)) {
                var_t2 = (((s32) (var_a3 - 4) >> 2) & 0xFFFF) | (((((var_t2 & 0x03FFFFFF) | 0x04000000) & 0xFFE0FFFF) | 0x130000) & 0xFC1FFFFF & 0xFFFF0000);
            }
            B_100A695E = (unaligned s32) var_t2;
        }
        break;
    default:
        var_s1 = 1;
        break;
    }
    addend..PHF = var_s0;
    return var_s1;
}
