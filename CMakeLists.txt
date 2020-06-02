cmake_minimum_required(VERSION 3.10)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pedantic -std=c99")

#add_definitions(-DTRUE_FALSE_DEFINED -DENGLISH -DWIN32 -DNDEBUG -D_WINDOWS -D_USRDLL -DREDALERT_EXPORTS)
project(redalert CXX)


include_directories(compat redalert/win32lib redalert)

add_executable(redalert
    redalert/2keyfram.cpp
    redalert/aadata.cpp
    redalert/abstract.cpp
    redalert/adata.cpp
    redalert/adpcm.cpp
    redalert/aircraft.cpp
    redalert/anim.cpp
    redalert/audio.cpp
    redalert/b64pipe.cpp
    redalert/b64straw.cpp
    redalert/bar.cpp
    redalert/base.cpp
    redalert/base64.cpp
    redalert/bbdata.cpp
    redalert/bdata.cpp
    redalert/bench.cpp
    redalert/bfiofile.cpp
    redalert/bigcheck.cpp
    redalert/blowfish.cpp
    redalert/blowpipe.cpp
    redalert/blwstraw.cpp
    redalert/buff.cpp
    redalert/building.cpp
    redalert/bullet.cpp
    redalert/cargo.cpp
    redalert/carry.cpp
    redalert/ccdde.cpp
    redalert/ccfile.cpp
#   redalert/ccini.cpp
    redalert/ccmpath.cpp
    redalert/ccptr.cpp
    redalert/ccten.cpp
    redalert/cdata.cpp
    redalert/cdfile.cpp
    redalert/cell.cpp
    redalert/checkbox.cpp
    redalert/cheklist.cpp
    redalert/class.cpp
    redalert/colrlist.cpp
    redalert/combat.cpp
    redalert/combuf.cpp
    redalert/cominit.cpp
    redalert/comqueue.cpp
    redalert/confdlg.cpp
    redalert/connect.cpp
    redalert/conquer.cpp
    redalert/const.cpp
    redalert/control.cpp
    redalert/coord.cpp
    redalert/crate.cpp
    redalert/crc.cpp
    redalert/crcpipe.cpp
    redalert/crcstraw.cpp
    redalert/credits.cpp
    redalert/crew.cpp
    redalert/cstraw.cpp
    redalert/dde.cpp
    redalert/debug.cpp
    redalert/descdlg.cpp
    redalert/dial8.cpp
    redalert/dialog.cpp
    redalert/dibfile.cpp
    redalert/dibutil.cpp
    redalert/display.cpp
#   redalert/dllinterface.cpp
#   redalert/dllinterfaceeditor.cpp
    redalert/door.cpp
    redalert/dpmi.cpp
    redalert/drive.cpp
    redalert/drop.cpp
    redalert/dtable.cpp
    redalert/dynavec.cpp
    redalert/edit.cpp
    redalert/egos.cpp
    redalert/ending.cpp
    redalert/event.cpp
    redalert/expand.cpp
    redalert/face.cpp
    redalert/facing.cpp
    redalert/factory.cpp
    redalert/field.cpp
    redalert/findpath.cpp
    redalert/fixed.cpp
    redalert/flasher.cpp
    redalert/fly.cpp
    redalert/foot.cpp
    redalert/fuse.cpp
    redalert/gadget.cpp
    redalert/gamedlg.cpp
    redalert/gauge.cpp
    redalert/getcpu.cpp
    redalert/globals.cpp
    redalert/goptions.cpp
    redalert/gscreen.cpp
    redalert/hdata.cpp
    redalert/heap.cpp
    redalert/help.cpp
#   redalert/house.cpp
    redalert/hsv.cpp
    redalert/iconlist.cpp
    redalert/idata.cpp
    redalert/infantry.cpp
#   redalert/ini.cpp
    redalert/inibin.cpp
    redalert/inicode.cpp
#   redalert/init.cpp
#   redalert/int.cpp
    redalert/internet.cpp
    redalert/interpal.cpp
    redalert/intro.cpp
    redalert/iomap.cpp
    redalert/ioobj.cpp
    redalert/ipx.cpp
    redalert/ipx95.cpp
    redalert/ipxaddr.cpp
    redalert/ipxconn.cpp
    redalert/ipxgconn.cpp
    redalert/ipxmgr.cpp
    redalert/itable.cpp
    redalert/jshell.cpp
    redalert/key.cpp
    redalert/layer.cpp
    redalert/lcw.cpp
    redalert/lcwpipe.cpp
    redalert/lcwstraw.cpp
    redalert/lcwuncmp.cpp
    redalert/link.cpp
    redalert/list.cpp
    redalert/loaddlg.cpp
    redalert/logic.cpp
    redalert/lzo1x_c.cpp
    redalert/lzo1x_d.cpp
    redalert/lzopipe.cpp
    redalert/lzostraw.cpp
    redalert/lzw.cpp
    redalert/lzwpipe.cpp
    redalert/lzwstraw.cpp
    redalert/map.cpp
    redalert/mapeddlg.cpp
    redalert/mapedit.cpp
    redalert/mapedplc.cpp
    redalert/mapedsel.cpp
    redalert/mapedtm.cpp
    redalert/mapsel.cpp
    redalert/mci.cpp
    redalert/mcimovie.cpp
    redalert/menus.cpp
#   redalert/miscasm.cpp
    redalert/mission.cpp
    redalert/mixfile.cpp
    redalert/monoc.cpp
    redalert/mouse.cpp
    redalert/mp.cpp
    redalert/mpgset.cpp
    redalert/mplayer.cpp
    redalert/mpmgrw.cpp
    redalert/mpu.cpp
    redalert/msgbox.cpp
    redalert/msglist.cpp
    redalert/netdlg.cpp
    redalert/nullconn.cpp
    redalert/nulldlg.cpp
    redalert/nullmgr.cpp
    redalert/object.cpp
    redalert/odata.cpp
    redalert/options.cpp
    redalert/overlay.cpp
    redalert/packet.cpp
    redalert/palettec.cpp
    redalert/pipe.cpp
    redalert/pk.cpp
    redalert/pkpipe.cpp
    redalert/pkstraw.cpp
    redalert/power.cpp
    redalert/profile.cpp
    redalert/queue.cpp
    redalert/radar.cpp
    redalert/radio.cpp
    redalert/ramfile.cpp
    redalert/rand.cpp
    redalert/random.cpp
    redalert/rawfile.cpp
    redalert/rawolapi.cpp
#   redalert/readline.cpp
    redalert/rect.cpp
    redalert/reinf.cpp
    redalert/rgb.cpp
    redalert/rndstraw.cpp
    redalert/rotbmp.cpp
    redalert/rules.cpp
#   redalert/saveload.cpp
#   redalert/scenario.cpp
    redalert/score.cpp
    redalert/scroll.cpp
    redalert/sdata.cpp
    redalert/seditdlg.cpp
    redalert/sendfile.cpp
    redalert/seqconn.cpp
    redalert/session.cpp
    redalert/sha.cpp
    redalert/shape.cpp
    redalert/shapebtn.cpp
    redalert/shapipe.cpp
    redalert/shastraw.cpp
    redalert/sidebar.cpp
    redalert/sidebarglyphx.cpp
    redalert/slider.cpp
    redalert/smudge.cpp
    redalert/sounddlg.cpp
    redalert/special.cpp
    redalert/sprite.cpp
    redalert/startup.cpp
    redalert/statbtn.cpp
    redalert/stats.cpp
    redalert/straw.cpp
#   redalert/stub.cpp
    redalert/super.cpp
    redalert/surface.cpp
    redalert/tab.cpp
    redalert/taction.cpp
    redalert/target.cpp
    redalert/tcpip.cpp
    redalert/tdata.cpp
    redalert/team.cpp
    redalert/teamtype.cpp
    redalert/techno.cpp
    redalert/template.cpp
    redalert/tenmgr.cpp
    redalert/terrain.cpp
    redalert/tevent.cpp
    redalert/textbtn.cpp
    redalert/theme.cpp
    redalert/toggle.cpp
    redalert/tooltip.cpp
    redalert/tracker.cpp
    redalert/trigger.cpp
    redalert/trigtype.cpp
    redalert/txtlabel.cpp
    redalert/udata.cpp
    redalert/udpaddr.cpp
    redalert/unit.cpp
    redalert/utracker.cpp
    redalert/vdata.cpp
    redalert/vector.cpp
    redalert/version.cpp
    redalert/vessel.cpp
    redalert/visudlg.cpp
    redalert/vortex.cpp
    redalert/w95trace.cpp
    redalert/warhead.cpp
    redalert/weapon.cpp
    redalert/win32lib/alloc.cpp
    redalert/win32lib/buffer.cpp
    redalert/win32lib/buffglbl.cpp
    redalert/win32lib/ddraw.cpp
    redalert/win32lib/delay.cpp
    redalert/win32lib/dipthong.cpp
#   redalert/win32lib/drawmisc.cpp
    redalert/win32lib/drawrect.cpp
    redalert/win32lib/font.cpp
    redalert/win32lib/gbuffer.cpp
    redalert/win32lib/getshape.cpp
    redalert/win32lib/iconset.cpp
    redalert/win32lib/iff.cpp
#   redalert/win32lib/irandom.cpp
    redalert/win32lib/load.cpp
    redalert/win32lib/loadfont.cpp
    redalert/win32lib/mouseww.cpp
    redalert/win32lib/palette.cpp
    redalert/win32lib/set_font.cpp
    redalert/win32lib/timer.cpp
    redalert/win32lib/timerdwn.cpp
    redalert/win32lib/timerini.cpp
    redalert/win32lib/windows.cpp
    redalert/win32lib/winhide.cpp
    redalert/win32lib/writepcx.cpp
    redalert/win32lib/_diptabl.cpp
    redalert/winstub.cpp
    redalert/wolapiob.cpp
    redalert/woledit.cpp
    redalert/wolstrng.cpp
    redalert/wol_cgam.cpp
    redalert/wol_chat.cpp
    redalert/wol_dnld.cpp
    redalert/wol_gsup.cpp
    redalert/wol_logn.cpp
    redalert/wol_main.cpp
    redalert/wol_opt.cpp
    redalert/wspipx.cpp
    redalert/wsproto.cpp
    redalert/wspudp.cpp
    redalert/xpipe.cpp
    redalert/xstraw.cpp
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DTRUE_FALSE_DEFINED -DENGLISH -DWIN32 -DNDEBUG -D_WINDOWS -D_USRDLL -DREDALERT_EXPORTS -fpermissive -w")

target_link_libraries(redalert wsock32 ws2_32)
