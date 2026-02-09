<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE PLT>
<PLT DOC_VERSION="23.10.0">
    <PLOT_CFG>
        <WINDOW_GEOMETRY>616 365 560 420</WINDOW_GEOMETRY>
        <ITEMS_LIST>
            <ITEM type="dpv">
                <UNIT>s</UNIT>
                <NAME>A0</NAME>
                <REF_TITLE>ame_simulation_time</REF_TITLE>
            </ITEM>
            <ITEM type="dpv">
                <UNIT>null</UNIT>
                <NAME>A1</NAME>
                <REF_TITLE>delta_SOC_exp</REF_TITLE>
            </ITEM>
            <ITEM type="dpv">
                <UNIT>percent</UNIT>
                <NAME>A2</NAME>
                <REF_TITLE>delta_SOC_simu</REF_TITLE>
            </ITEM>
        </ITEMS_LIST>
        <INPUT_ITEMS_LIST/>
        <COMPUTATION_LIST/>
        <PAGE_CFG>
            <NB_ROWS_COLUMNS>1 1</NB_ROWS_COLUMNS>
            <AREAS_LIST>
                <AREA>
                    <GEOMETRY>0 0 558 311</GEOMETRY>
                    <GRAPH_RENDERER type="2D discrete">
                        <MARGIN_COLOR>255 255 255</MARGIN_COLOR>
                        <MARGIN_SIZE>56 53 3 3 56 0 56 56</MARGIN_SIZE>
                        <AREA_COLOR>255 255 255</AREA_COLOR>
                        <IS_BOX_DRAWN>true</IS_BOX_DRAWN>
                        <BOX_PEN>200 200 200 1 1</BOX_PEN>
                        <X_AXIS>
                            <ZOOM/>
                            <TITLE>
                                <SHOW_BORDER>false</SHOW_BORDER>
                                <GRAPH_ANCHOR>13</GRAPH_ANCHOR>
                            </TITLE>
                            <PEN>0 0 0 1 1</PEN>
                            <FONT>
                                <FONT_FAMILY>Segoe UI</FONT_FAMILY>
                                <FONT_SIZE>9</FONT_SIZE>
                                <FONT_STYLE>700 0</FONT_STYLE>
                                <FONT_EFFECT>0 0</FONT_EFFECT>
                            </FONT>
                            <OPTIONS>
                                <POWER_MODE>-1</POWER_MODE>
                                <MAJOR_TICKS_MODE>-1</MAJOR_TICKS_MODE>
                                <MINOR_TICKS_MODE>-1</MINOR_TICKS_MODE>
                            </OPTIONS>
                            <SHOW_LINES>true</SHOW_LINES>
                            <SHOW_TEXTS>true</SHOW_TEXTS>
                            <SHOW_UNIT>false</SHOW_UNIT>
                            <SHOW_TITLE>false</SHOW_TITLE>
                            <DRAW_AXIS>true</DRAW_AXIS>
                            <MAJOR_GRID_PEN>200 200 200 3 1</MAJOR_GRID_PEN>
                            <MINOR_GRID_STYLE>3</MINOR_GRID_STYLE>
                            <MAJOR_GRID_DRAWN>true</MAJOR_GRID_DRAWN>
                            <MINOR_GRID_DRAWN>true</MINOR_GRID_DRAWN>
                        </X_AXIS>
                        <Y_AXIS>
                            <ZOOM/>
                            <TITLE>
                                <SHOW_BORDER>false</SHOW_BORDER>
                                <GRAPH_ANCHOR>18</GRAPH_ANCHOR>
                            </TITLE>
                            <PEN>0 0 0 1 1</PEN>
                            <FONT>
                                <FONT_FAMILY>Segoe UI</FONT_FAMILY>
                                <FONT_SIZE>9</FONT_SIZE>
                                <FONT_STYLE>700 0</FONT_STYLE>
                                <FONT_EFFECT>0 0</FONT_EFFECT>
                            </FONT>
                            <RANK>0</RANK>
                            <OPTIONS>
                                <POWER_MODE>-1</POWER_MODE>
                                <MAJOR_TICKS_MODE>-1</MAJOR_TICKS_MODE>
                                <MINOR_TICKS_MODE>-1</MINOR_TICKS_MODE>
                            </OPTIONS>
                            <SHOW_LINES>true</SHOW_LINES>
                            <SHOW_TEXTS>true</SHOW_TEXTS>
                            <SHOW_UNIT>true</SHOW_UNIT>
                            <SHOW_TITLE>false</SHOW_TITLE>
                            <DRAW_AXIS>true</DRAW_AXIS>
                            <MAJOR_GRID_PEN>200 200 200 3 1</MAJOR_GRID_PEN>
                            <MINOR_GRID_STYLE>3</MINOR_GRID_STYLE>
                            <MAJOR_GRID_DRAWN>true</MAJOR_GRID_DRAWN>
                            <MINOR_GRID_DRAWN>true</MINOR_GRID_DRAWN>
                        </Y_AXIS>
                        <ORIENTATION>2</ORIENTATION>
                        <DISCRETE_AXIS_TYPE>1</DISCRETE_AXIS_TYPE>
                    </GRAPH_RENDERER>
                    <CURVE type="1D annotated animated">
                        <TITLE>
                            <RGB_FG_COLOR>0 0 0</RGB_FG_COLOR>
                            <FONT_FAMILY>Segoe UI</FONT_FAMILY>
                            <FONT_SIZE>9</FONT_SIZE>
                            <FONT_STYLE>400 0</FONT_STYLE>
                            <FONT_EFFECT>0 0</FONT_EFFECT>
                        </TITLE>
                        <NB_ITEMS>2</NB_ITEMS>
                        <ITEM>
                            <NAME>A0</NAME>
                        </ITEM>
                        <ITEM>
                            <NAME>A1</NAME>
                        </ITEM>
                        <CURVE_DISPLAY type="2D bar">
                            <BAR_COLOR>237 11 0</BAR_COLOR>
                            <BAR_STYLE>15</BAR_STYLE>
                            <ARE_LABELS_DRAWN>true</ARE_LABELS_DRAWN>
                            <LABEL_POSITION>2</LABEL_POSITION>
                        </CURVE_DISPLAY>
                        <YAXIS_RANK>0 0</YAXIS_RANK>
                        <ANNOTATION_UPDATE>1</ANNOTATION_UPDATE>
                        <ANNOTATION_CUSTOMIZED>0</ANNOTATION_CUSTOMIZED>
                        <ANNOTATION_LIST>delta SOC expected $|$ </ANNOTATION_LIST>
                    </CURVE>
                    <CURVE type="1D annotated animated">
                        <TITLE>
                            <RGB_FG_COLOR>0 0 0</RGB_FG_COLOR>
                            <FONT_FAMILY>Segoe UI</FONT_FAMILY>
                            <FONT_SIZE>9</FONT_SIZE>
                            <FONT_STYLE>400 0</FONT_STYLE>
                            <FONT_EFFECT>0 0</FONT_EFFECT>
                        </TITLE>
                        <NB_ITEMS>2</NB_ITEMS>
                        <ITEM>
                            <NAME>A0</NAME>
                        </ITEM>
                        <ITEM>
                            <NAME>A2</NAME>
                        </ITEM>
                        <CURVE_DISPLAY type="2D bar">
                            <BAR_COLOR>0 100 135</BAR_COLOR>
                            <BAR_STYLE>15</BAR_STYLE>
                            <ARE_LABELS_DRAWN>true</ARE_LABELS_DRAWN>
                            <LABEL_POSITION>2</LABEL_POSITION>
                        </CURVE_DISPLAY>
                        <YAXIS_RANK>0 0</YAXIS_RANK>
                        <ANNOTATION_UPDATE>1</ANNOTATION_UPDATE>
                        <ANNOTATION_CUSTOMIZED>0</ANNOTATION_CUSTOMIZED>
                        <ANNOTATION_LIST>delta SOC simulated $|$ </ANNOTATION_LIST>
                    </CURVE>
                    <GRAPH_TITLES_CONFIGURATION>
                        <IS_AUTOMATIC_MODE>0</IS_AUTOMATIC_MODE>
                        <IS_GRAPH_TITLE_SHOWN>false</IS_GRAPH_TITLE_SHOWN>
                        <IS_LEGEND_SHOWN>true</IS_LEGEND_SHOWN>
                        <IS_GRAPH_KEYS_SHOWN>true</IS_GRAPH_KEYS_SHOWN>
                        <LEGEND_POSITION>16</LEGEND_POSITION>
                        <TITLE_POSITION>2</TITLE_POSITION>
                        <X_AXIS_TITLE_POSITION>13</X_AXIS_TITLE_POSITION>
                    </GRAPH_TITLES_CONFIGURATION>
                    <GRAPH_TITLE>
                        <SHOW_BORDER>false</SHOW_BORDER>
                        <GRAPH_ANCHOR>2</GRAPH_ANCHOR>
                        <RGB_FG_COLOR>0 0 0</RGB_FG_COLOR>
                        <FONT_FAMILY>Segoe UI</FONT_FAMILY>
                        <FONT_SIZE>9</FONT_SIZE>
                        <FONT_STYLE>700 0</FONT_STYLE>
                        <FONT_EFFECT>0 0</FONT_EFFECT>
                    </GRAPH_TITLE>
                    <LEGEND>
                        <SHOW_BORDER>true</SHOW_BORDER>
                        <GRAPH_ANCHOR>16</GRAPH_ANCHOR>
                        <DEFAULT_TEXT_STYLE>
                            <COLOR>0 0 0</COLOR>
                            <FONT>
                                <FONT_FAMILY>Segoe UI</FONT_FAMILY>
                                <FONT_SIZE>9</FONT_SIZE>
                                <FONT_STYLE>400 0</FONT_STYLE>
                                <FONT_EFFECT>0 0</FONT_EFFECT>
                            </FONT>
                            <BORDER_SHOWN>true</BORDER_SHOWN>
                        </DEFAULT_TEXT_STYLE>
                    </LEGEND>
                    <DATA_SET_MODE>1</DATA_SET_MODE>
                </AREA>
            </AREAS_LIST>
        </PAGE_CFG>
    </PLOT_CFG>
</PLT>
