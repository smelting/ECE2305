#define BQ25601_ADDR		0x6B

#define REG00 				0x00
#define EN_HIZ 				7
#define EN_ICHG_MON_1 		6
#define EN_ICHG_MON_0 		5
#define IINDPM_4 			4
#define IINDPM_3 			3
#define IINDPM_2 			2
#define IINDPM_1 			1
#define IINDPM_0 			0


#define REG01				0x01
#define PFM_DIS				7
#define WD_RST				6
#define OTG_CONFIG			5
#define CHG_CONFIG			4
#define SYS_Min_2			3
#define SYS_Min_1			2
#define SYS_Min_0			1
#define Min_Vbat_SEL		0


#define REG02 				0x02
#define BOOST_LIM			7
#define Q1_FULLON			6
#define ICHG_5				5
#define ICHG_4				4
#define ICHG_3				3
#define ICHG_2				2
#define ICHG_1 				1
#define ICHG_0 				0

#define REG03				0x03
#define IPRECHG_3			7
#define IPRECHG_2			6
#define IPRECHG_1			5
#define IPRECHG_0			4
#define ITERM_3				3
#define ITERM_2				2
#define ITERM_1				1
#define ITERM_0				0

#define REG04				0x04
#define VREG_4				7
#define VREG_3				6
#define VREG_2				5
#define VREG_1				4
#define VREG_0				3
#define TOPOFF_TIMER_1		2
#define TOPOFF_TIMER_0		1
#define VREGCHG				0

#define REG05				0x05
#define EN_TERM				7
#define WATCHDOG_1			5
#define WATCHDOG_0			4
#define EN_TIMER			3
#define CHG_TIMER			2
#define TREG				1
#define JEITA_ISET			0

#define REG06				0x06
#define OVP_1				7
#define OVP_0				6
#define BOOSTV_1			5
#define BOOSTV_0			4
#define VINDPM_3			3
#define VINDPM_2			2
#define VINDPM_1			1
#define VINDPM_0 			0

#define REG07 				0x07
#define IINDET_EN			7
#define TMR2X_EN			6
#define BATFET_DIS			5
#define JEITA_VSET			4
#define BATFET_DLY			3
#define BATFET_RST_EN		2
#define VDPM_BAT_TRACK_1 	1
#define VDPM_BAT_TRACK_0	0

#define REG08				0x08
#define VBUS_STAT_2			7
#define VBUS_STAT_1			6
#define VBUS_STAT_0			5
#define CHRG_STAT_1			4
#define CHRG_STAT_0			3
#define PG_STAT 			2
#define THERM_STAT 			1
#define VSYS_STAT			0

#define REG09				0x09
#define WATCHDOG_FAULT		7
#define BOOST_FAULT			6
#define CHRG_FAULT_1		5
#define CHRG_FAULT_0		4
#define BAT_FAULT			3
#define NTC_FAULT_2			2
#define NTC_FAULT_1			1
#define NTC_FAULT_0			0

#define REG0A				0x0A
#define VBUS_GD				7
#define VINDPM_STAT			6
#define IINDPM_STAT			5
#define TOPOFF_ACTIVE		3
#define ACOV_STAT			2
#define VINDPM_INT_MASK		1
#define IINDPM_INT_MASK		0

#define REG0B				0x0B
#define REG_RST				7
#define PN_3				6
#define PN_2				5
#define PN_1				4
#define PN_0				3
#define DEV_REV_1			1
#define DEV_REV_0			0