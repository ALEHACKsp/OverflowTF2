#include "settings.hpp"
#include "..\color.hpp"

namespace settings {

	bool visuals = true;

	bool team_visuals = false;

	bool box = true;

	color box_color = {255, 255, 255};

	bool health_bar = true;

	bool glow_players = false;

	bool skeleton = true;

	color skeleton_color = { 238, 130, 238 };

	bool snap_lines = false;

	color snap_lines_color = { 255, 255, 255 };

	bool direction_line = true;

	color direction_line_color = { 255, 255, 255 };

	bool health_text = true;

	bool class_name = true;

	color class_name_color = { 255, 255, 255 };

	bool buildings = true;

	bool glow_buildings = true;

	bool team_buildings = true;

	bool teleporter_esp = true;

	color teleporter_esp_color = { 255, 255, 255 };

	bool dispenser_esp = true;

	color dispenser_esp_color = { 255, 255, 255 };

	bool turret_esp = true;

	color turret_esp_color = { 255, 255, 255 };

	bool pickups = false;

	bool health_pack_esp = true;

	color health_pack_esp_color = { 255, 255, 255 };

	bool ammo_box_esp = true;

	color ammo_box_esp_color = { 255, 255, 255 };

	bool chams = true;

	bool enemy_chams = false;

	color enemy_chams_color = { 255, 255, 255 };

	bool gold_arm = true;

	// aimbot

	bool aimbot = true;

	int aimbot_key = 0;

	int aimbot_bone = 1;

	int aimbot_fov = 20;

	float aimbot_smoothness = .5;

	bool triggerbot = false;

	int triggerbot_key = 0;

	int triggerbot_bone = 0;

	bool triggerbot_always_on = false;

	bool triggerbot_scoped_only = true;

	bool triggerbot_ignore_cloaked = true;
	
	// misc

	bool misc = true;

	bool bunny_hop = true;

	bool auto_backstab = true;

	// others

	bool spectator_list = true;
}