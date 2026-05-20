#pragma once
#include <cstdint>

namespace offsets {
    struct base_player {
        inline static constexpr uintptr_t display_name = 0xD48;
        inline static constexpr uintptr_t player_eyes = 0x538;
        inline static constexpr uintptr_t player_inventory = 0x628;
        inline static constexpr uintptr_t current_team = 0x4e8;
        inline static constexpr uintptr_t base_movement = 0x4d8;
        inline static constexpr uintptr_t player_model = 0x2c0;
        inline static constexpr uintptr_t player_flags = 0x660;
        inline static constexpr uintptr_t cl_active_item = 0x518;
        inline static constexpr uintptr_t player_input = 0x3b0;
    };

    struct base_combat_entity {
        inline static constexpr uintptr_t lifestate = 0x8D0;
        inline static constexpr uintptr_t health = 0x970;
        inline static constexpr uintptr_t max_health = 0x990;
        inline static constexpr uintptr_t model = 0xf0;
    };

    struct base_entity {
        inline static constexpr uintptr_t flags = 0xf8;
    };

    struct item_container {
        inline static constexpr uintptr_t item_list = 0x70;
    };

    struct player_inventory {
        inline static constexpr uintptr_t main = 0x58;
        inline static constexpr uintptr_t belt = 0x78;
        inline static constexpr uintptr_t wear = 0x60;
    };
}
