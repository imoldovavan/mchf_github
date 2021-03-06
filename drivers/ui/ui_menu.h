/************************************************************************************
**                                                                                 **
**                               mcHF QRP Transceiver                              **
**                             K Atanassov - M0NKA 2014                            **
**                                                                                 **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:		For radio amateurs experimentation, non-commercial use only!   **
************************************************************************************/

#ifndef __UI_MENU_H
#define __UI_MENU_H
//
// Exports
//
void UiDriverUpdateMenu(uchar mode);
//
//
#define	MENUSIZE	6				// number of menu items per page/screen
//
// Enumeration for main menu.
// These items MUST be listed below in the order that they appear on the screen!
//
//
enum {
	MENU_DSP_NR_STRENGTH = 0,
	MENU_300HZ_SEL,
	MENU_500HZ_SEL,
	MENU_1K8_SEL,
	MENU_2k3_SEL,
	MENU_3K6_SEL,
	MENU_10K_SEL,
	MENU_CW_WIDE_FILT,
	MENU_SSB_NARROW_FILT,
	MENU_AM_DISABLE,
	MENU_SSB_AUTO_MODE_SELECT,
	MENU_AGC_MODE,
	MENU_RF_GAIN_ADJ,
	MENU_CUSTOM_AGC,
	MENU_CODEC_GAIN_MODE,
	MENU_NOISE_BLANKER_SETTING,
	MENU_RX_FREQ_CONV,
	MENU_MIC_LINE_MODE,
	MENU_MIC_GAIN,
	MENU_LINE_GAIN,
	MENU_ALC_RELEASE,
	MENU_ALC_POSTFILT_GAIN,
	MENU_TX_COMPRESSION_LEVEL,
	MENU_KEYER_MODE,
	MENU_KEYER_SPEED,
	MENU_SIDETONE_GAIN,
	MENU_SIDETONE_FREQUENCY,
	MENU_PADDLE_REVERSE,
	MENU_CW_TX_RX_DELAY,
	MENU_CW_OFFSET_MODE,
	MENU_TCXO_MODE,
	MENU_TCXO_C_F,
	MENU_SPEC_SCOPE_SPEED,
	MENU_SCOPE_FILTER_STRENGTH,
	MENU_SCOPE_TRACE_COLOUR,
	MENU_SCOPE_GRID_COLOUR,
	MENU_SCOPE_SCALE_COLOUR,
	MENU_SCOPE_MAGNIFY,
	MENU_SCOPE_ALC_ADJUST,
	MENU_SCOPE_RESCALE_ADJUST,
	MENU_CONFIG_ENABLE,
	//
	MAX_MENU_ITEM	// Number of menu items - This must ALWAYS remain as the LAST item!
};
//
//
// Enumeration for configuration menu.
// These items MUST be listed below in the order that they appear!
//
enum {
	CONFIG_FREQ_STEP_MARKER_LINE = 0,
	CONFIG_STEP_SIZE_BUTTON_SWAP,
	CONFIG_BAND_BUTTON_SWAP,
	CONFIG_TX_DISABLE,
	CONFIG_AUDIO_MAIN_SCREEN_MENU_SWITCH,
	CONFIG_MUTE_LINE_OUT_TX,
	CONFIG_LCD_AUTO_OFF_MODE,
	CONFIG_MAX_VOLUME,
	CONFIG_MAX_RX_GAIN,
	CONFIG_CAT_ENABLE,
	CONFIG_FREQUENCY_CALIBRATE,
	CONFIG_LSB_RX_IQ_GAIN_BAL,
	CONFIG_LSB_RX_IQ_PHASE_BAL,
	CONFIG_USB_RX_IQ_GAIN_BAL,
	CONFIG_USB_RX_IQ_PHASE_BAL,
	CONFIG_AM_RX_GAIN_BAL,
	CONFIG_LSB_TX_IQ_GAIN_BAL,
	CONFIG_LSB_TX_IQ_PHASE_BAL,
	CONFIG_USB_TX_IQ_GAIN_BAL,
	CONFIG_USB_TX_IQ_PHASE_BAL,
	CONFIG_CW_PA_BIAS,
	CONFIG_PA_BIAS,
	CONFIG_RF_FWD_PWR_CALIBRATE,
	CONFIG_XVTR_OFFSET_MULT,
	CONFIG_XVTR_FREQUENCY_OFFSET,
	CONFIG_80M_5W_ADJUST,
	CONFIG_60M_5W_ADJUST,
	CONFIG_40M_5W_ADJUST,
	CONFIG_30M_5W_ADJUST,
	CONFIG_20M_5W_ADJUST,
	CONFIG_17M_5W_ADJUST,
	CONFIG_15M_5W_ADJUST,
	CONFIG_12M_5W_ADJUST,
	CONFIG_10M_5W_ADJUST,
	CONFIG_80M_FULL_POWER_ADJUST,
	CONFIG_60M_FULL_POWER_ADJUST,
	CONFIG_40M_FULL_POWER_ADJUST,
	CONFIG_30M_FULL_POWER_ADJUST,
	CONFIG_20M_FULL_POWER_ADJUST,
	CONFIG_17M_FULL_POWER_ADJUST,
	CONFIG_15M_FULL_POWER_ADJUST,
	CONFIG_12M_FULL_POWER_ADJUST,
	CONFIG_10M_FULL_POWER_ADJUST,
	CONFIG_DSP_NR_DECORRELATOR_BUFFER_LENGTH,
	CONFIG_DSP_NR_FFT_NUMTAPS,
	CONFIG_DSP_NR_POST_AGC_SELECT,
	CONFIG_DSP_NOTCH_CONVERGE_RATE,
	CONFIG_DSP_NOTCH_DECORRELATOR_BUFFER_LENGTH,
	CONFIG_AGC_TIME_CONSTANT,
	CONFIG_AM_TX_FILTER_ENABLE,
	//
	MAX_RADIO_CONFIG_ITEMS	// Number of radio configuration menu items - This must ALWAYS remain as the LAST item!
};
//
#endif
