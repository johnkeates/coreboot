
SPD_SOURCES  = samsung_dimm_K4E8E324EB-EGCF     # 0b0000
SPD_SOURCES += samsung_dimm_K4E6E304EB-EGCF     # 0b0001
SPD_SOURCES += samsung_dimm_K4EBE304EB-EGCG     # 0b0010

bootblock-y += gpio.c
ramstage-y += gpio.c