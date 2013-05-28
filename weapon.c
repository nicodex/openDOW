#include "weapon.h"

#define AMMO(type, mm, rounds, price) [type] = { mm, rounds, price }
#define MM(x) (x * 10)
const struct ammo ammunition[] = {
	AMMO(AMMO_45ACP, MM(2.54 * .45), 100, 65),
	AMMO(AMMO_9MMPARABELLUM, MM(9), 100, 60),
	AMMO(AMMO_556, 556, 100, 50),
	AMMO(AMMO_762, 762, 100, 55),
	AMMO(AMMO_10MM, MM(10), 100, 80),
	AMMO(AMMO_ROCKET83MM, MM(83), 1, 1400),
	AMMO(AMMO_ROCKET40MM, MM(40), 1, 1300),
	AMMO(AMMO_K200GRENADE40MM, MM(40), 1, 200),
	AMMO(AMMO_GAS, MM(0), 50, 500),
	AMMO(AMMO_GRENADE, MM(0), 5, 250),
};
#undef MM
#undef AMMO

#define WEAP(id, bullspeed, _rpm, _range, _ammo, _price, _flags) \
	[id] = { \
	.bullet_speed = bullspeed, .rpm = _rpm, .range = _range, \
	.ammo = _ammo, .price = _price, .flags = _flags}
#define RPM(x) (x)
#define RANGE(x) (x/100)
const struct weapon weapons[] = {
	WEAP(WP_COLT45, 3, RPM(200), RANGE(200), AMMO_45ACP, 100, 0),
	WEAP(WP_BROWNING, 3, RPM(200), RANGE(200), AMMO_45ACP, 110, 0),
	WEAP(WP_SA80, 20, RPM(800), RANGE(500), AMMO_556, 1400, WF_AUTOMATIC),
	WEAP(WP_MP5, 10, RPM(800), RANGE(200), AMMO_9MMPARABELLUM, 800, WF_AUTOMATIC),
	WEAP(WP_UZI, 10, RPM(600), RANGE(200), AMMO_9MMPARABELLUM, 700, WF_AUTOMATIC),
	WEAP(WP_STEYR, 8, RPM(650), RANGE(300), AMMO_556, 1500, WF_AUTOMATIC),
	WEAP(WP_AK47, 8, RPM(600), RANGE(400), AMMO_556, 800, WF_AUTOMATIC),
	WEAP(WP_M16A2, 8, RPM(600), RANGE(400), AMMO_556, 900, WF_AUTOMATIC),
	WEAP(WP_M203, 8, RPM(600), RANGE(400), AMMO_556, 1500, WF_AUTOMATIC),
	WEAP(WP_RPK, 8, RPM(600), RANGE(800), AMMO_762, 4900, WF_AUTOMATIC),
	WEAP(WP_L7A2, 12, RPM(850), RANGE(1200), AMMO_762, 5700, WF_AUTOMATIC),
	WEAP(WP_HK21, 16, RPM(900), RANGE(1200), AMMO_762, 7800, WF_AUTOMATIC),
	WEAP(WP_M60, 8, RPM(550), RANGE(1000), AMMO_762, 6200, WF_AUTOMATIC),
	WEAP(WP_M134, 20, RPM(3000), RANGE(2000), AMMO_10MM, 10400, WF_AUTOMATIC),
	WEAP(WP_RPG7, 8, RPM(0), RANGE(300), AMMO_ROCKET40MM, 2600, 0),
	WEAP(WP_LAW, 8, RPM(0), RANGE(400), AMMO_INVALID, 2900, 0), // comes with a single rocket preloaded, not reloadable
	WEAP(WP_MAW, 8, RPM(0), RANGE(500), AMMO_ROCKET83MM, 2100, 0),
	WEAP(WP_ABC, 8, RPM(200), RANGE(100), AMMO_GAS, 9900, 0),
	WEAP(WP_GRENADES, 3, RPM(0), RANGE(100), AMMO_GRENADE, 50, 0),
};
#undef WEAP
#undef RPM
// range 200 entspricht ca 128 pix
// range 400 - " -         235 pix
// range 500, 800 ebenso
// range 1000+ entspricht der diagonale von einem eck zum andern

#define WEAPN(x) [x] = #x
const char *weapon_names[] = {
	WEAPN(WP_COLT45),
	WEAPN(WP_BROWNING),
	WEAPN(WP_SA80),
	WEAPN(WP_MP5),
	WEAPN(WP_UZI),
	WEAPN(WP_STEYR),
	WEAPN(WP_AK47),
	WEAPN(WP_M16A2),
	WEAPN(WP_M203),
	WEAPN(WP_RPK),
	WEAPN(WP_L7A2),
	WEAPN(WP_HK21),
	WEAPN(WP_M60),
	WEAPN(WP_M134),
	WEAPN(WP_RPG7),
	WEAPN(WP_LAW),
	WEAPN(WP_MAW),
	WEAPN(WP_ABC),
	WEAPN(WP_GRENADES),
};

const char* weapon_name(enum weapon_id id) {
	if(id >= WP_MAX) return 0;
	return weapon_names[id];
}