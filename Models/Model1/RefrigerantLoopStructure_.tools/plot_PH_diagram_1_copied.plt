<?xml version='1.0' encoding='UTF-8'?>
<!DOCTYPE PLT>
<PLT DOC_VERSION="13.0.0">
    <PLOT_CFG type="Thermodynamic plot">
        <WINDOW_GEOMETRY>379 207 810 557</WINDOW_GEOMETRY>
        <ITEMS_LIST>
            <ITEM type="dpv">
                <UNIT>s</UNIT>
                <NAME>A0</NAME>
                <REF_TITLE>ame_simulation_time</REF_TITLE>
            </ITEM>
            <ITEM type="dpv">
                <UNIT>kJ/kg</UNIT>
                <NAME>A1</NAME>
                <REF_TITLE>hspe@tpf_generic_sensor_extra</REF_TITLE>
            </ITEM>
            <ITEM type="dpv">
                <UNIT>barA</UNIT>
                <NAME>A2</NAME>
                <REF_TITLE>p3@tpf_generic_sensor_extra</REF_TITLE>
            </ITEM>
            <ITEM type="dpv">
                <UNIT>kJ/kg</UNIT>
                <NAME>A3</NAME>
                <REF_TITLE>hspe@tpf_generic_sensor_extra_1</REF_TITLE>
            </ITEM>
            <ITEM type="dpv">
                <UNIT>barA</UNIT>
                <NAME>A4</NAME>
                <REF_TITLE>p3@tpf_generic_sensor_extra_1</REF_TITLE>
            </ITEM>
            <ITEM type="dpv">
                <UNIT>kJ/kg</UNIT>
                <NAME>A5</NAME>
                <REF_TITLE>hspe@tpf_generic_sensor_extra_2</REF_TITLE>
            </ITEM>
            <ITEM type="dpv">
                <UNIT>barA</UNIT>
                <NAME>A6</NAME>
                <REF_TITLE>p3@tpf_generic_sensor_extra_2</REF_TITLE>
            </ITEM>
            <ITEM type="dpv">
                <UNIT>kJ/kg</UNIT>
                <NAME>A7</NAME>
                <REF_TITLE>hspe@tpf_generic_sensor_extra_3</REF_TITLE>
            </ITEM>
            <ITEM type="dpv">
                <UNIT>barA</UNIT>
                <NAME>A8</NAME>
                <REF_TITLE>p3@tpf_generic_sensor_extra_3</REF_TITLE>
            </ITEM>
            <ITEM type="dpv">
                <UNIT>kJ/kg</UNIT>
                <NAME>A9</NAME>
                <REF_TITLE>hspe@tpf_generic_sensor_extra_4</REF_TITLE>
            </ITEM>
            <ITEM type="dpv">
                <UNIT>barA</UNIT>
                <NAME>A10</NAME>
                <REF_TITLE>p3@tpf_generic_sensor_extra_4</REF_TITLE>
            </ITEM>
        </ITEMS_LIST>
        <PAGE_CFG>
            <NB_ROWS_COLUMNS>1 1</NB_ROWS_COLUMNS>
            <AREAS_LIST>
                <AREA type="Thermodynamic graph">
                    <GEOMETRY>0 0 804 459</GEOMETRY>
                    <GRAPH_RENDERER type="2D thermodynamic">
                        <MARGIN_COLOR>255 255 255</MARGIN_COLOR>
                        <MARGIN_SIZE>46 43 3 18 71 0 71 60</MARGIN_SIZE>
                        <AREA_COLOR>255 255 255</AREA_COLOR>
                        <IS_BOX_DRAWN>true</IS_BOX_DRAWN>
                        <BOX_PEN>200 200 200 1 1</BOX_PEN>
                        <X_AXIS>
                            <ZOOM/>
                            <TITLE>
                                <TEXT>X: tpf_generic_sensor_extra - specific enthalpy [kJ/kg]</TEXT>
                                <RGB_FG_COLOR>0 0 0</RGB_FG_COLOR>
                                <FONT_FAMILY>MS Shell Dlg 2</FONT_FAMILY>
                                <FONT_SIZE>8</FONT_SIZE>
                                <FONT_STYLE>50 0</FONT_STYLE>
                                <FONT_EFFECT>0 0</FONT_EFFECT>
                            </TITLE>
                            <PEN>0 0 0 1 1</PEN>
                            <FONT>
                                <FONT_FAMILY>MS Shell Dlg 2</FONT_FAMILY>
                                <FONT_SIZE>8</FONT_SIZE>
                                <FONT_STYLE>50 0</FONT_STYLE>
                                <FONT_EFFECT>0 0</FONT_EFFECT>
                            </FONT>
                            <OPTIONS>
                                <POWER_MODE>-1</POWER_MODE>
                                <MAJOR_TICKS_MODE>-1</MAJOR_TICKS_MODE>
                                <MINOR_TICKS_MODE>-1</MINOR_TICKS_MODE>
                            </OPTIONS>
                            <SHOW_UNIT>false</SHOW_UNIT>
                            <MAJOR_GRID_PEN>200 200 200 3 1</MAJOR_GRID_PEN>
                            <MINOR_GRID_STYLE>3</MINOR_GRID_STYLE>
                            <MAJOR_GRID_DRAWN>true</MAJOR_GRID_DRAWN>
                            <MINOR_GRID_DRAWN>false</MINOR_GRID_DRAWN>
                        </X_AXIS>
                        <Y_AXIS>
                            <ZOOM>
                                <IS_LOG>true</IS_LOG>
                            </ZOOM>
                            <PEN>0 0 0 1 1</PEN>
                            <FONT>
                                <FONT_FAMILY>MS Shell Dlg 2</FONT_FAMILY>
                                <FONT_SIZE>8</FONT_SIZE>
                                <FONT_STYLE>50 0</FONT_STYLE>
                                <FONT_EFFECT>0 0</FONT_EFFECT>
                            </FONT>
                            <RANK>0</RANK>
                            <OPTIONS>
                                <POWER_MODE>-1</POWER_MODE>
                                <MAJOR_TICKS_MODE>-1</MAJOR_TICKS_MODE>
                                <MINOR_TICKS_MODE>-1</MINOR_TICKS_MODE>
                            </OPTIONS>
                            <SHOW_UNIT>true</SHOW_UNIT>
                            <MAJOR_GRID_PEN>200 200 200 3 1</MAJOR_GRID_PEN>
                            <MINOR_GRID_STYLE>3</MINOR_GRID_STYLE>
                            <MAJOR_GRID_DRAWN>true</MAJOR_GRID_DRAWN>
                            <MINOR_GRID_DRAWN>false</MINOR_GRID_DRAWN>
                        </Y_AXIS>
                        <ANIM_TIME>500</ANIM_TIME>
                    </GRAPH_RENDERER>
                    <CURVE type="Thermodynamic">
                        <TITLE>
                            <TEXT>tpf_generic_sensor_extra - pressure at port 3 [barA]</TEXT>
                            <RGB_FG_COLOR>0 0 0</RGB_FG_COLOR>
                            <FONT_FAMILY>MS Shell Dlg 2</FONT_FAMILY>
                            <FONT_SIZE>8</FONT_SIZE>
                            <FONT_STYLE>50 0</FONT_STYLE>
                            <FONT_EFFECT>0 0</FONT_EFFECT>
                        </TITLE>
                        <NB_ITEMS>11</NB_ITEMS>
                        <ITEM>
                            <NAME>A0</NAME>
                        </ITEM>
                        <ITEM>
                            <NAME>A1</NAME>
                        </ITEM>
                        <ITEM>
                            <NAME>A2</NAME>
                        </ITEM>
                        <ITEM>
                            <NAME>A3</NAME>
                        </ITEM>
                        <ITEM>
                            <NAME>A4</NAME>
                        </ITEM>
                        <ITEM>
                            <NAME>A5</NAME>
                        </ITEM>
                        <ITEM>
                            <NAME>A6</NAME>
                        </ITEM>
                        <ITEM>
                            <NAME>A7</NAME>
                        </ITEM>
                        <ITEM>
                            <NAME>A8</NAME>
                        </ITEM>
                        <ITEM>
                            <NAME>A9</NAME>
                        </ITEM>
                        <ITEM>
                            <NAME>A10</NAME>
                        </ITEM>
                        <CURVE_DISPLAY type="2D line">
                            <ARE_LINES_DRAWN>true</ARE_LINES_DRAWN>
                            <LINE_PEN>255 0 0 1 2</LINE_PEN>
                            <ARE_SYMBOLS_DRAWN>false</ARE_SYMBOLS_DRAWN>
                            <SYMBOLS_COLOR>255 0 0</SYMBOLS_COLOR>
                            <SYMBOLS_STYLE>4</SYMBOLS_STYLE>
                            <SYMBOLS_SIZE>1</SYMBOLS_SIZE>
                            <SYMBOLS_DENSITY>100</SYMBOLS_DENSITY>
                        </CURVE_DISPLAY>
                        <NODE_ALIAS>tpf_generic_sensor_extra</NODE_ALIAS>
                        <NODE_ALIAS>tpf_generic_sensor_extra_1</NODE_ALIAS>
                        <NODE_ALIAS>tpf_generic_sensor_extra_2</NODE_ALIAS>
                        <NODE_ALIAS>tpf_generic_sensor_extra_3</NODE_ALIAS>
                        <NODE_ALIAS>tpf_generic_sensor_extra_4</NODE_ALIAS>
                        <CLOSE_CYCLE>true</CLOSE_CYCLE>
                    </CURVE>
                    <GRAPH_TITLES_CONFIGURATION>
                        <IS_AUTOMATIC_MODE>0</IS_AUTOMATIC_MODE>
                        <IS_GRAPH_TITLE_SHOWN>false</IS_GRAPH_TITLE_SHOWN>
                        <IS_XAXIS_TITLE_SHOWN>true</IS_XAXIS_TITLE_SHOWN>
                        <IS_LEGEND_SHOWN>true</IS_LEGEND_SHOWN>
                        <IS_GRAPH_KEYS_SHOWN>true</IS_GRAPH_KEYS_SHOWN>
                        <LEGEND_POSITION>1</LEGEND_POSITION>
                    </GRAPH_TITLES_CONFIGURATION>
                    <GRAPH_TITLE>
                        <SHOW_BORDER>true</SHOW_BORDER>
                        <TEXT>tpf_generic_sensor_extra - pressure at port 3 [barA]</TEXT>
                        <RGB_FG_COLOR>0 0 0</RGB_FG_COLOR>
                        <FONT_FAMILY>MS Shell Dlg 2</FONT_FAMILY>
                        <FONT_SIZE>8</FONT_SIZE>
                        <FONT_STYLE>50 0</FONT_STYLE>
                        <FONT_EFFECT>0 0</FONT_EFFECT>
                    </GRAPH_TITLE>
                    <LEGEND>
                        <SHOW_BORDER>true</SHOW_BORDER>
                    </LEGEND>
                    <LIBRARY_ID>tpf</LIBRARY_ID>
                    <DIAGRAM_ID>diag_logp_h</DIAGRAM_ID>
                    <FLUID_ID>R134a</FLUID_ID>
                </AREA>
            </AREAS_LIST>
        </PAGE_CFG>
        <ANIMATION_ZOOM>1</ANIMATION_ZOOM>
    </PLOT_CFG>
</PLT>
