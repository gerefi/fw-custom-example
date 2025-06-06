// this section was generated automatically by gerEFI tool config_definition_base-all.jar based on (unknown script) controllers/trigger/trigger_state.txt Tue Mar 05 17:17:35 UTC 2024
// by class com.gerefi.output.CHeaderConsumer
// begin
#pragma once
#include "gerefi_types.h"
// start of trigger_state_s
struct trigger_state_s {
	/**
	 * sync: Crank sync counter
	 * Usually matches crank revolutions
	 * offset 0
	 */
	uint32_t crankSynchronizationCounter = (uint32_t)0;
	/**
	 * offset 4
	 */
	float vvtSyncGapRatio = (float)0;
	/**
	 * units: us
	 * offset 8
	 */
	uint32_t vvtToothDurations0 = (uint32_t)0;
	/**
	 * units: sync: Primary Cam Position
	 * offset 12
	 */
	float vvtCurrentPosition = (float)0;
	/**
	 * units: sync: Cam Tooth Position
	 * offset 16
	 */
	float vvtToothPosition[4];
	/**
	 * @@GAUGE_NAME_TRG_GAP@@
	 * offset 32
	 */
	float triggerSyncGapRatio = (float)0;
	/**
	 * offset 36
	 */
	uint8_t triggerStateIndex = (uint8_t)0;
	/**
	 * offset 37
	 */
	uint8_t vvtStateIndex = (uint8_t)0;
	/**
	 * need 4 byte alignment
	 * units: units
	 * offset 38
	 */
	uint8_t alignmentFill_at_38[2];
};
static_assert(sizeof(trigger_state_s) == 40);

// end
// this section was generated automatically by gerEFI tool config_definition_base-all.jar based on (unknown script) controllers/trigger/trigger_state.txt Tue Mar 05 17:17:35 UTC 2024
