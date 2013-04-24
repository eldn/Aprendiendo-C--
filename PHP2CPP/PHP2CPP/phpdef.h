/***********************************************************
php2c++ Version 20010620
Copyright 2001, Forrest J. Cavalier III d-b-a Mib Software

License, documentation, and original and updated source code
are available from http://www.mibsoftware.com/

Outputs are not derived works of this software.
***********************************************************/

/*function.abs.html*/
//      mixed  abs   (mixed number)     ;
      double  abs   (double)     ;
      int  abs   (int)     ;
/*function.acos.html*/
      float  acos   (float arg)     ;
/*function.ada-afetch.html*/
;
/*function.ada-autocommit.html*/
;
/*function.ada-close.html*/
;
/*function.ada-commit.html*/
;
/*function.ada-connect.html*/
;
/*function.ada-exec.html*/
;
/*function.ada-fetchrow.html*/
;
/*function.ada-fieldname.html*/
;
/*function.ada-fieldnum.html*/
;
/*function.ada-fieldtype.html*/
;
/*function.ada-freeresult.html*/
;
/*function.ada-numfields.html*/
;
/*function.ada-numrows.html*/
;
/*function.ada-result.html*/
;
/*function.ada-resultall.html*/
;
/*function.ada-rollback.html*/
;
/*function.addcslashes.html*/
      string  addcslashes   (string str, string charlist)     ;
/*function.addslashes.html*/
      string  addslashes   (string str)     ;
/*function.apache-lookup-uri.html*/
      class class_apache_lookup_uri;
      class_apache_lookup_uri apache_lookup_uri   (string filename)     ;
/*function.apache-note.html*/
      string  apache_note   (string note_name )     ;
      string  apache_note   (string note_name , string         note_value)     ;
/*function.array-count-values.html*/
      array  array_count_values   (array input)     ;
/*function.array-diff.html*/
      array  array_diff   (array array1, array array2 /*, array        ...*/)     ;
/*function.array-flip.html*/
      array  array_flip   (array trans)     ;
/*function.array-intersect.html*/
      array  array_intersect   (array array1, array array2 /*, array        ...*/)     ;
/*function.array-keys.html*/
      array  array_keys   (array input /*, mixed        search_value*/)     ;
      array  array_keys   (array input , mixed        search_value)     ;
/*function.array-merge-recursive.html*/
      array  array_merge_recursive   (array array1, array array2 /*, array        ...*/)     ;
/*function.array-merge.html*/
      array  array_merge   (array array1, array array2 /*, array        ...*/)     ;
/*function.array-multisort.html*/
      bool  array_multisort   (array ar1 /*, mixed        arg , mixed        ... , array        ...*/)     ;
/*function.array-pad.html*/
      array  array_pad   (array input, int pad_size, mixed pad_value)     ;
/*function.array-pop.html*/
      mixed  array_pop   (array array)     ;
/*function.array-push.html*/
      int  array_push   (array array, mixed var /*, mixed        ...*/)     ;
/*function.array-rand.html*/
      mixed  array_rand   (array input /*, int        num_req*/)     ;
      mixed  array_rand   (array input , int        num_req)     ;
/*function.array-reverse.html*/
      array  array_reverse   (array array)     ;
/*function.array-shift.html*/
      mixed  array_shift   (array array)     ;
/*function.array-slice.html*/
      array  array_slice   (array array, int offset /*, int        length*/)     ;
      array  array_slice   (array array, int offset , int        length)     ;
/*function.array-splice.html*/
      array  array_splice   (array input, int offset /*, int        length*//*, array        replacement*/)     ;
      array  array_splice   (array input, int offset , int        length/*, array        replacement*/)     ;
      array  array_splice   (array input, int offset , int        length, array        replacement)     ;
/*function.array-unique.html*/
      array  array_unique   (array array)     ;
/*function.array-unshift.html*/
      int  array_unshift   (array array, mixed var /*, mixed        ...*/)     ;
/*function.array-values.html*/
      array  array_values   (array input)     ;
/*function.array-walk.html*/
      int  array_walk   (array arr, string func, mixed userdata)     ;
/*function.array.html*/
//DEBUG      array  array   (/*mixed         ...*/)     ;
/*function.arsort.html*/
      void  arsort   (array array /*, int         sort_flags*/)     ;
      void  arsort   (array array , int         sort_flags)     ;
/*function.asin.html*/
      float  asin   (float arg)     ;
/*function.asort.html*/
      void  asort   (array array /*, int sort_flags*/)     ;
      void  asort   (array array , int sort_flags)     ;
/*function.aspell-check-raw.html*/
      bool  aspell_check_raw   (int dictionary_link, string word)     ;
/*function.aspell-check.html*/
      bool  aspell_check   (int dictionary_link, string word)     ;
/*function.aspell-new.html*/
      int  aspell_new   (string master, string personal)     ;
/*function.aspell-suggest.html*/
      array  aspell_suggest   (int dictionary_link, string word)     ;
/*function.assert.html*/
      int  assert   (string)     ;
      int  assert   (bool)     ;
/*function.assert_options.html*/
      mixed  assert_options   (int what /*, mixed         value*/)     ;
      mixed  assert_options   (int what , mixed         value)     ;
/*function.atan.html*/
      float  atan   (float arg)     ;
/*function.atan2.html*/
      float  atan2   (float y, float x)     ;
/*function.base-convert.html*/
      string  base_convert   (string number, int frombase, int tobase)     ;
/*function.base64-decode.html*/
      string  base64_decode   (string encoded_data)     ;
/*function.base64-encode.html*/
      string  base64_encode   (string data)     ;
/*function.basename.html*/
      string  basename   (string path)     ;
/*function.bcadd.html*/
      string  bcadd   (string left_operand, string right_operand /*, int         scale*/)     ;
      string  bcadd   (string left_operand, string right_operand , int         scale)     ;
/*function.bccomp.html*/
      int  bccomp   (string left_operand, string right_operand /*, int         scale*/)     ;
      int  bccomp   (string left_operand, string right_operand , int         scale)     ;
/*function.bcdiv.html*/
      string  bcdiv   (string left_operand, string right_operand /*, int         scale*/)     ;
      string  bcdiv   (string left_operand, string right_operand , int         scale)     ;
/*function.bcmod.html*/
      string  bcmod   (string left_operand, string modulus)     ;
/*function.bcmul.html*/
      string  bcmul   (string left_operand, string right_operand /*, int         scale*/)     ;
      string  bcmul   (string left_operand, string right_operand , int         scale)     ;
/*function.bcpow.html*/
      string  bcpow   (string x, string y /*, int         scale*/)     ;
      string  bcpow   (string x, string y , int         scale)     ;
/*function.bcscale.html*/
      string  bcscale   (int scale)     ;
/*function.bcsqrt.html*/
      string  bcsqrt   (string operand, int scale)     ;
/*function.bcsub.html*/
      string  bcsub   (string left_operand, string right_operand /*, int         scale*/)     ;
      string  bcsub   (string left_operand, string right_operand , int         scale)     ;
/*function.bin2hex.html*/
      string  bin2hex   (string str)     ;
/*function.bindec.html*/
      int  bindec   (string binary_string)     ;
/*function.bindtextdomain.html*/
      string  bindtextdomain   (string domain, string directory)     ;
/*function.call-user-func.html*/
      mixed          call_user_func          (string         function_name /*, mixed         parameter*/ /*, mixed         ...*/)     ;
/*function.call-user-method.html*/
      mixed          call_user_method          (string         method_name, object         obj /*, mixed         parameter*/ /*, mixed         ...*/)     ;
/*function.ceil.html*/
      int  ceil   (float number)     ;
/*function.chdir.html*/
      int  chdir   (string directory)     ;
/*function.checkdate.html*/
      int  checkdate   (int month, int day, int year)     ;
/*function.checkdnsrr.html*/
      int  checkdnsrr   (string host /*, string         type*/)     ;
      int  checkdnsrr   (string host , string         type)     ;
/*function.chgrp.html*/
      int  chgrp   (string filename, mixed group)     ;
/*function.chmod.html*/
      int  chmod   (string filename, int mode)     ;
/*function.chop.html*/
      string  chop   (string str)     ;
/*function.chown.html*/
      int  chown   (string filename, mixed user)     ;
/*function.chr.html*/
      string  chr   (int ascii)     ;
/*function.chunk-split.html*/
      string  chunk_split   (string s /*, int         chunklen*/ /*, string         end*/)     ;
      string  chunk_split   (string s , int         chunklen /*, string         end*/)     ;
      string  chunk_split   (string s , int         chunklen , string         end)     ;
/*function.class-exists.html*/
      bool  class_exists   (string class_name)     ;
/*function.clearstatcache.html*/
      void  clearstatcache  (void);     ;
/*function.closedir.html*/
      void  closedir   (int dir_handle)     ;
/*function.closelog.html*/
      int  closelog  (void);     ;
#if 0
Added in PHP4 and not well-documented when this header file created.
/*function.com-get.html*/
      mixed  com_get   (resource object, string property)     ;
/*function.com-invoke.html*/
      mixed  com_invoke   (resource object, string function_name /*, mixed         function parameters, ...*/)     ;
/*function.com-load.html*/
      string  com_load   (string module name /*, string         server name*/)     ;
      string  com_load   (string module name , string         server name)     ;
/*function.com-propget.html*/
      mixed  com_propget   (resource object, string property)     ;
/*function.com-propput.html*/
      void  com_propput   (resource object, string property, mixed value)     ;
/*function.com-propset.html*/
      void  com_propset   (resource object, string property, mixed value)     ;
/*function.com-set.html*/
      void  com_set   (resource object, string property, mixed value)     ;
#endif
/*function.compact.html*/
      array  compact   (mixed varname /*, mixed        ...*/)     ;
/*function.connection-aborted.html*/
      int  connection_aborted   (void )     ;
/*function.connection-status.html*/
      int  connection_status   (void )     ;
/*function.connection-timeout.html*/
      int  connection_timeout   (void )     ;
/*function.convert-cyr-string.html*/
      string  convert_cyr_string   (string str, string from, string to)     ;
/*function.copy.html*/
      int  copy   (string source, string dest)     ;
/*function.cos.html*/
      float  cos   (float arg)     ;
/*function.count-chars.html*/
      mixed  count_chars   (string s /*, mode*/)     ;
      mixed  count_chars   (string s , int mode)     ;
/*function.count.html*/
      int  count   (mixed var)     ;
/*function.cpdf-add-annotation.html*/
      void  cpdf_add_annotation   (int pdf_document, double llx, double lly, double urx, double ury, string title, string content, int mode)     ;
/*function.cpdf-add-outline.html*/
      void  cpdf_add_outline   (int pdf_document, string text)     ;
/*function.cpdf-arc.html*/
      void  cpdf_arc   (int pdf_document, double x_koor, double y_koor, double radius, double start, double end, int mode)     ;
/*function.cpdf-begin-text.html*/
      void  cpdf_begin_text   (int pdf_document)     ;
/*function.cpdf-circle.html*/
      void  cpdf_circle   (int pdf_document, double x_koor, double y_koor, double radius, int mode)     ;
/*function.cpdf-clip.html*/
      void  cpdf_clip   (int pdf_document)     ;
/*function.cpdf-close.html*/
      void  cpdf_close   (int pdf_document)     ;
/*function.cpdf-closepath-fill-stroke.html*/
      void  cpdf_closepath_fill_stroke   (int pdf_document)     ;
/*function.cpdf-closepath-stroke.html*/
      void  cpdf_closepath_stroke   (int pdf_document)     ;
/*function.cpdf-closepath.html*/
      void  cpdf_closepath   (int pdf_document)     ;
/*function.cpdf-continue-text.html*/
      void  cpdf_continue_text   (int pdf_document, string text)     ;
/*function.cpdf-curveto.html*/
      void  cpdf_curveto   (int pdf_document, double x1, double y1, double x2, double y2, double x3, double y3, int mode)     ;
/*function.cpdf-end-text.html*/
      void  cpdf_end_text   (int pdf_document)     ;
/*function.cpdf-endpath.html*/
;
/*function.cpdf-fill-stroke.html*/
      void  cpdf_fill_stroke   (int pdf_document)     ;
/*function.cpdf-fill.html*/
      void  cpdf_fill   (int pdf_document)     ;
/*function.cpdf-finalize-page.html*/
      void  cpdf_finalize_page   (int pdf_document, int page_number)     ;
/*function.cpdf-finalize.html*/
      void  cpdf_finalize   (int pdf_document)     ;
/*function.cpdf-global-set-document-limits.html*/
      void  cpdf_global_set_document_limits   (int maxpages, int maxfonts, int maximages, int maxannotations, int maxobjects)     ;
/*function.cpdf-import-jpeg.html*/
      int  cpdf_open_jpeg   (int pdf_document, string file_name, double x_koor, double y_koor, double angle, double width, double height, double x_scale, double y_scale, int mode)     ;
/*function.cpdf-lineto.html*/
      void  cpdf_lineto   (int pdf_document, double x_koor, double y_koor, int mode)     ;
/*function.cpdf-moveto.html*/
      void  cpdf_moveto   (int pdf_document, double x_koor, double y_koor, int mode)     ;
/*function.cpdf-newpath.html*/
      void              cpdf_newpath             (int             pdf_document)     ;
/*function.cpdf-open.html*/
      int  cpdf_open   (int compression, string filename)     ;
/*function.cpdf-output-buffer.html*/
      void  cpdf_output_buffer   (int pdf_document)     ;
/*function.cpdf-page-init.html*/
      void  cpdf_page_init   (int pdf_document, int page_number, int orientation, double height, double width, double unit)     ;
/*function.cpdf-place-inline-image.html*/
      void  cpdf_place_inline_image   (int pdf_document, int image, double x_koor, double y_koor, double angle, double width, double height, int mode)     ;
/*function.cpdf-rect.html*/
      void  cpdf_rect   (int pdf_document, double x_koor, double y_koor, double width, double height, int mode)     ;
/*function.cpdf-restore.html*/
      void  cpdf_restore   (int pdf_document)     ;
/*function.cpdf-rlineto.html*/
      void  cpdf_rlineto   (int pdf_document, double x_koor, double y_koor, int mode)     ;
/*function.cpdf-rmoveto.html*/
      void  cpdf_rmoveto   (int pdf_document, double x_koor, double y_koor, int mode)     ;
/*function.cpdf-rotate.html*/
      void  cpdf_rotate   (int pdf_document, double angle)     ;
/*function.cpdf-save-to-file.html*/
      void  cpdf_save_to_file   (int pdf_document, string filename)     ;
/*function.cpdf-save.html*/
      void  cpdf_save   (int pdf_document)     ;
/*function.cpdf_scale.html*/
      void  cpdf_scale   (int pdf_document, double x_scale, double y_scale)     ;
/*function.cpdf-set-char-spacing.html*/
      void  cpdf_set_char_spacing   (int pdf_document, double space)     ;
/*function.cpdf-set-creator.html*/
      void  cpdf_set_creator   (string creator)     ;
/*function.cpdf-set-current-page.html*/
      void  cpdf_set_current_page   (int pdf_document, int page_number)     ;
/*function.cpdf-set-font.html*/
      void  cpdf_set_font   (int pdf_document, string font_name, double size, string encoding)     ;
/*function.cpdf-set-horiz-scaling.html*/
      void  cpdf_set_horiz_scaling   (int pdf_document, double scale)     ;
/*function.cpdf-set-keywords.html*/
      void  cpdf_set_keywords   (string keywords)     ;
/*function.cpdf-set-leading.html*/
      void  cpdf_set_leading   (int pdf_document, double distance)     ;
/*function.cpdf-set-page-animation.html*/
      void  cpdf_set_page_animation   (int pdf_document, int transition, double duration)     ;
/*function.cpdf-set-subject.html*/
      void  cpdf_set_subject   (string subject)     ;
/*function.cpdf-set-text-matrix.html*/
      void  cpdf_set_text_matrix   (int pdf_document, array matrix)     ;
/*function.cpdf-set-text-pos.html*/
      void  cpdf_set_text_pos   (int pdf_document, double x_koor, double y_koor, int mode)     ;
/*function.cpdf-set-text-rendering.html*/
      void  cpdf_set_text_rendering   (int pdf_document, int mode)     ;
/*function.cpdf-set-text-rise.html*/
      void  cpdf_set_text_rise   (int pdf_document, double value)     ;
/*function.cpdf-set-title.html*/
      void  cpdf_set_title   (string title)     ;
/*function.cpdf-set-word-spacing.html*/
      void  cpdf_set_word_spacing   (int pdf_document, double space)     ;
/*function.cpdf-setdash.html*/
      void  cpdf_setdash   (int pdf_document, double white, double black)     ;
/*function.cpdf-setflat.html*/
      void  cpdf_setflat   (int pdf_document, double value)     ;
/*function.cpdf-setgray-fill.html*/
      void  cpdf_setgray_fill   (int pdf_document, double value)     ;
/*function.cpdf-setgray-stroke.html*/
      void  cpdf_setgray_stroke   (int pdf_document, double gray_value)     ;
/*function.cpdf-setgray.html*/
      void  cpdf_setgray   (int pdf_document, double gray_value)     ;
/*function.cpdf-setlinecap.html*/
      void  cpdf_setlinecap   (int pdf_document, int value)     ;
/*function.cpdf-setlinejoin.html*/
      void  cpdf_setlinejoin   (int pdf_document, long value)     ;
/*function.cpdf-setlinewidth.html*/
      void  cpdf_setlinewidth   (int pdf_document, double width)     ;
/*function.cpdf-setmiterlimit.html*/
      void  cpdf_setmiterlimit   (int pdf_document, double value)     ;
/*function.cpdf-setrgbcolor-fill.html*/
      void  cpdf_setrgbcolor_fill   (int pdf_document, double red_value, double green_value, double blue_value)     ;
/*function.cpdf-setrgbcolor-stroke.html*/
      void  cpdf_setrgbcolor_stroke   (int pdf_document, double red_value, double green_value, double blue_value)     ;
/*function.cpdf-setrgbcolor.html*/
      void  cpdf_setrgbcolor   (int pdf_document, double red_value, double green_value, double blue_value)     ;
/*function.cpdf-show-xy.html*/
      void  cpdf_show_xy   (int pdf_document, string text, double x_koor, double y_koor, int mode)     ;
/*function.cpdf-show.html*/
      void  cpdf_show   (int pdf_document, string text)     ;
/*function.cpdf-stringwidth.html*/
      double  cpdf_stringwidth   (int pdf_document, string text)     ;
/*function.cpdf-stroke.html*/
      void  cpdf_stroke   (int pdf_document)     ;
/*function.cpdf-text.html*/
      void  cpdf_text   (int pdf_document, string text, double x_koor, double y_koor, int mode, double orientation, int alignmode)     ;
/*function.cpdf-translate.html*/
      void  cpdf_translate   (int pdf_document, double x_koor, double y_koor, int mode)     ;
/*function.crc32.html*/
      int  crc32   (string str)     ;
/*function.create-function.html*/
      string  create_function   (string args, string code)     ;
/*function.crypt.html*/
      string  crypt   (string str /*, string         salt*/)     ;
      string  crypt   (string str , string         salt)     ;
/*function.curl-close.html*/
      void          curl_close          (int         ch)     ;
/*function.curl-exec.html*/
      bool          curl_exec          (int         ch)     ;
/*function.curl-init.html*/
      int          curl_init          (/*string         url*/)     ;
      int          curl_init          (string         url)     ;
/*function.curl-setopt.html*/
      bool          curl_setopt          (int         ch, string         option, mixed         value)     ;
/*function.curl-version.html*/
      string          curl_version         (void);     ;
/*function.current.html*/
      mixed  current   (array array)     ;
/*function.cybercash-base64-decode.html*/
      string          cybercash_base64_decode          (string inbuff)     ;
/*function.cybercash-base64-encode.html*/
      string          cybercash_base64_encode          (string inbuff)     ;
/*function.cybercash-decr.html*/
      array  cybercash_decr   (string wmk, string sk, string inbuff)     ;
/*function.cybercash-encr.html*/
      array  cybercash_encr   (string wmk, string sk, string inbuff)     ;
/*function.date.html*/
      string  date   (string format /*, int         timestamp*/)     ;
      string  date   (string format , int         timestamp)     ;
/*function.dba-close.html*/
      void  dba_close   (int handle)     ;
/*function.dba-delete.html*/
      string  dba_delete   (string key, int handle)     ;
/*function.dba-exists.html*/
      bool  dba_exists   (string key, int handle)     ;
/*function.dba-fetch.html*/
      string  dba_fetch   (string key, int handle)     ;
/*function.dba-firstkey.html*/
      string  dba_firstkey   (int handle)     ;
/*function.dba-insert.html*/
      bool  dba_insert   (string key, string value, int handle)     ;
/*function.dba-nextkey.html*/
      string  dba_nextkey   (int handle)     ;
/*function.dba-open.html*/
      int  dba_open   (string path, string mode, string handler /*, ...*/)     ;
/*function.dba-optimize.html*/
      bool  dba_optimize   (int handle)     ;
/*function.dba-popen.html*/
      int  dba_popen   (string path, string mode, string handler /*, ...*/)     ;
/*function.dba-replace.html*/
      bool  dba_replace   (string key, string value, int handle)     ;
/*function.dba-sync.html*/
      bool  dba_sync   (int handle)     ;
/*function.dbase-add-record.html*/
      bool  dbase_add_record   (int dbase_identifier, array record)     ;
/*function.dbase-close.html*/
      bool  dbase_close   (int dbase_identifier)     ;
/*function.dbase-create.html*/
      int  dbase_create   (string filename, array fields)     ;
/*function.dbase-delete-record.html*/
      bool  dbase_delete_record   (int dbase_identifier, int record)     ;
/*function.dbase-get-record-with-names.html*/
      array          dbase_get_record_with_names          (int dbase_identifier, int record)     ;
/*function.dbase-get-record.html*/
      array  dbase_get_record   (int dbase_identifier, int record)     ;
/*function.dbase-numfields.html*/
      int  dbase_numfields   (int dbase_identifier)     ;
/*function.dbase-numrecords.html*/
      int  dbase_numrecords   (int dbase_identifier)     ;
/*function.dbase-open.html*/
      int  dbase_open   (string filename, int flags)     ;
/*function.dbase-pack.html*/
      bool  dbase_pack   (int dbase_identifier)     ;
/*function.dbase-replace-record.html*/
      bool  dbase_replace_record   (int dbase_identifier, array record, int dbase_record_number)     ;
/*function.dblist.html*/
      string  dblist   (void)     ;
/*function.dbmclose.html*/
      bool  dbmclose   (int dbm_identifier)     ;
/*function.dbmdelete.html*/
      bool  dbmdelete   (int dbm_identifier, string key)     ;
/*function.dbmexists.html*/
      bool  dbmexists   (int dbm_identifier, string key)     ;
/*function.dbmfetch.html*/
      string  dbmfetch   (int dbm_identifier, string key)     ;
/*function.dbmfirstkey.html*/
      string  dbmfirstkey   (int dbm_identifier)     ;
/*function.dbminsert.html*/
      int  dbminsert   (int dbm_identifier, string key, string value)     ;
/*function.dbmnextkey.html*/
      string  dbmnextkey   (int dbm_identifier, string key)     ;
/*function.dbmopen.html*/
      int  dbmopen   (string filename, string flags)     ;
/*function.dbmreplace.html*/
      bool  dbmreplace   (int dbm_identifier, string key, string value)     ;
/*function.dcgettext.html*/
      string  dcgettext   (string domain, string message, int category)     ;
/*function.debugger-off.html*/
      int  debugger_off  (void);     ;
/*function.debugger-on.html*/
      int  debugger_on   (string address)     ;
/*function.decbin.html*/
      string  decbin   (int number)     ;
/*function.dechex.html*/
      string  dechex   (int number)     ;
/*function.decoct.html*/
      string  decoct   (int number)     ;
/*function.define.html*/
      int  define   (string name, mixed value /*, int         case_insensitive*/)     ;
      int  define   (string name, mixed value , int         case_insensitive)     ;
      int  define   (string name, string value /*, int         case_insensitive*/)     ;
      int  define   (string name, string value , int         case_insensitive)     ;
/*function.defined.html*/
      int  defined   (string name)     ;
/*function.deg2rad.html*/
      double  deg2rad   (double number)     ;
/*function.delete.html*/
//DEBUG      void  delete   (string file)     ;
/*function.dgettext.html*/
      string  dgettext   (string domain, string message)     ;
/*function.die.html*/
      void  die   (string message)     ;
/*function.dirname.html*/
      string  dirname   (string path)     ;
/*function.diskfreespace.html*/
      float  diskfreespace   (string directory)     ;
/*function.dl.html*/
      int  dl   (string library)     ;
/*function.doubleval.html*/
      double  doubleval   (mixed var)     ;
/*function.each.html*/
      array  each   (array array)     ;
/*function.easter-date.html*/
      int  easter_date   (int year)     ;
/*function.easter-days.html*/
      int  easter_days   (int year)     ;
/*function.echo.html*/
//       echo   (string arg1, string         /*argn*/...)     ;
      void echo(const char *);
      void echo(const char *,const char *);
      void echo(const char *,const char *,const char *);
      void echo(int);

/*function.empty.html*/
      int  empty   (mixed var)     ;
      int empty (string var);
/*function.end.html*/
      void end   (array array)     ;
/*function.ereg-replace.html*/
      string  ereg_replace   (string pattern, string replacement, string string)     ;
/*function.ereg.html*/
      int  ereg   (string pattern, string string /*, array         regs*/)     ;
      int  ereg   (string pattern, string string , array         regs)     ;
/*function.eregi-replace.html*/
      string  eregi_replace   (string pattern, string replacement, string string)     ;
/*function.eregi.html*/
      int  eregi   (string pattern, string string /*, array         regs*/)     ;
      int  eregi   (string pattern, string string , array         regs)     ;
/*function.error-log.html*/
      int  error_log   (string message, int message_type /*, string         destination*/ /*, string         extra_headers*/)     ;
      int  error_log   (string message, int message_type , string         destination /*, string         extra_headers*/)     ;
      int  error_log   (string message, int message_type , string         destination , string         extra_headers)     ;
/*function.error-reporting.html*/
      int  error_reporting   (/*int         level*/)     ;
      int  error_reporting   (int         level)     ;
/*function.escapeshellcmd.html*/
      string  escapeshellcmd   (string command)     ;
/*function.eval.html*/
      mixed  eval   (string code_str)     ;
/*function.exec.html*/
      string  exec   (string command /*, string         array*/ /*, int         return_var*/)     ;
      string  exec   (string command , string         array /*, int         return_var*/)     ;
      string  exec   (string command , string         array , int         return_var)     ;
/*function.exit.html*/
      void  exit  (void);     ;
/*function.exp.html*/
      float  exp   (float arg)     ;
/*function.explode.html*/
      array  explode   (string separator, string string /*, int            limit*/)     ;
      array  explode   (string separator, string string , int            limit)     ;
/*function.extension-loaded.html*/
      bool  extension_loaded   (string name)     ;
/*function.extract.html*/
      void  extract   (array var_array /*, int         extract_type*/ /*, string         prefix*/)     ;
      void  extract   (array var_array , int         extract_type /*, string         prefix*/)     ;
      void  extract   (array var_array , int         extract_type , string         prefix)     ;
/*function.ezmlm-hash.html*/
      int  ezmlm_hash   (string addr)     ;
/*function.fclose.html*/
      int  fclose   (int fp)     ;
/*function.fdf-close.html*/
      void  fdf_close   (int fdf_document)     ;
/*function.fdf-create.html*/
      int  fdf_create   (void )     ;
/*function.fdf-get-file.html*/
      string  fdf_get_file   (int fdf_document)     ;
/*function.fdf-get-status.html*/
      string  fdf_get_status   (int fdf_document)     ;
/*function.fdf-get-value.html*/
      string  fdf_get_value   (int fdf_document, string fieldname)     ;
/*function.fdf-next-field-name.html*/
      string  fdf_next_field_name   (int fdf_document, string fieldname)     ;
/*function.fdf-open.html*/
      int  fdf_open   (string filename)     ;
/*function.fdf-save.html*/
      int  fdf_save   (string filename)     ;
/*function.fdf-set-ap.html*/
      void  fdf_set_ap   (int fdf_document, string field_name, int face, string filename, int page_number)     ;
/*function.fdf-set-file.html*/
      void  fdf_set_file   (int fdf_document, string filename)     ;
/*function.fdf-set-flags.html*/
      void  fdf_set_flags   (int fdf_document, string fieldname, int whichFlags, int newFlags)     ;
/*function.fdf-set-javascript-action.html*/
      void  fdf_set_javascript_action   (int fdf_document, string fieldname, int trigger, string script)     ;
/*function.fdf-set-opt.html*/
      void  fdf_set_opt   (int fdf_document, string fieldname, int element, string str1, string str2)     ;
/*function.fdf-set-status.html*/
      void  fdf_set_status   (int fdf_document, string status)     ;
/*function.fdf-set-submit-form-action.html*/
      void  fdf_set_submit_form_action   (int fdf_document, string fieldname, int trigger, string script, int flags)     ;
/*function.fdf-set-value.html*/
      void  fdf_set_value   (int fdf_document, string fieldname, string value, int isName)     ;
/*function.feof.html*/
//DEBUG      int  feof   (int fp)     ;
/*function.fgetc.html*/
      string  fgetc   (int fp)     ;
/*function.fgetcsv.html*/
      array  fgetcsv   (int fp, int length /*, string         delimiter*/)     ;
      array  fgetcsv   (int fp, int length , string         delimiter)     ;
/*function.fgets.html*/
      string  fgets   (int fp, int length)     ;
/*function.fgetss.html*/
      string  fgetss   (int fp, int length /*, string         allowable_tags*/)     ;
      string  fgetss   (int fp, int length , string         allowable_tags)     ;
/*function.file-exists.html*/
      int  file_exists   (string filename)     ;
/*function.file.html*/
      array  file   (string filename /*, int         use_include_path*/)     ;
      array  file   (string filename , int         use_include_path)     ;
/*function.fileatime.html*/
      int  fileatime   (string filename)     ;
/*function.filectime.html*/
      int  filectime   (string filename)     ;
/*function.filegroup.html*/
      int  filegroup   (string filename)     ;
/*function.fileinode.html*/
      int  fileinode   (string filename)     ;
/*function.filemtime.html*/
      int  filemtime   (string filename)     ;
/*function.fileowner.html*/
      int  fileowner   (string filename)     ;
/*function.fileperms.html*/
      int  fileperms   (string filename)     ;
/*function.filepro-fieldcount.html*/
      int  filepro_fieldcount  (void);     ;
/*function.filepro-fieldname.html*/
      string  filepro_fieldname   (int field_number)     ;
/*function.filepro-fieldtype.html*/
      string  filepro_fieldtype   (int field_number)     ;
/*function.filepro-fieldwidth.html*/
      int  filepro_fieldwidth   (int field_number)     ;
/*function.filepro-retrieve.html*/
      string  filepro_retrieve   (int row_number, int field_number)     ;
/*function.filepro-rowcount.html*/
      int  filepro_rowcount  (void);     ;
/*function.filepro.html*/
      bool  filepro   (string directory)     ;
/*function.filesize.html*/
      int  filesize   (string filename)     ;
/*function.filetype.html*/
      string  filetype   (string filename)     ;
/*function.flock.html*/
      bool  flock   (int fp, int operation /*, int         wouldblock*/)     ;
      bool  flock   (int fp, int operation , int         wouldblock)     ;
/*function.floor.html*/
      int  floor   (float number)     ;
/*function.flush.html*/
      void  flush  (void);     ;
/*function.fopen.html*/
      int  fopen   (string filename, string mode /*, int         use_include_path*/)     ;
      int  fopen   (string filename, string mode , int         use_include_path)     ;
/*function.fpassthru.html*/
      int  fpassthru   (int fp)     ;
/*function.fputs.html*/
      int  fputs   (int fp, string str /*, int         length*/)     ;
      int  fputs   (int fp, string str , int         length)     ;
/*function.fread.html*/
      string  fread   (int fp, int length)     ;
/*function.frenchtojd.html*/
      int  frenchtojd   (int month, int day, int year)     ;
/*function.fscanf.html*/
      mixed  fscanf   (int handle, string format /*, string         var1...*/)     ;
/*function.fseek.html*/
      int  fseek   (int fp, int offset /*, int         whence*/)     ;
      int  fseek   (int fp, int offset , int         whence)     ;
/*function.fsockopen.html*/
      int  fsockopen   (string /*udp:*/hostname, int port/*, int         errno*//*, string         errstr*//*, double        timeout*/)     ;
      int  fsockopen   (string /*udp:*/hostname, int port, int         errno/*, string         errstr*//*, double        timeout*/)     ;
      int  fsockopen   (string /*udp:*/hostname, int port, int         errno, string         errstr/*, double        timeout*/)     ;
      int  fsockopen   (string /*udp:*/hostname, int port, int         errno, string         errstr, double        timeout)     ;
/*function.fstat.html*/
      array  fstat   (int fp)     ;
/*function.ftell.html*/
      int  ftell   (int fp)     ;
/*function.ftp-cdup.html*/
      int  ftp_cdup   (int ftp_stream)     ;
/*function.ftp-chdir.html*/
      int  ftp_chdir   (int ftp_stream, string directory)     ;
/*function.ftp-connect.html*/
      int  ftp_connect   (string host /*, int port*/)     ;
      int  ftp_connect   (string host , int port)     ;
/*function.ftp-delete.html*/
      int  ftp_delete   (int ftp_stream, string path)     ;
/*function.ftp-fget.html*/
      int  ftp_fget   (int ftp_stream, int fp, string remote_file, int mode)     ;
/*function.ftp-fput.html*/
      int  ftp_fput   (int ftp_stream, string remote_file, int fp, int mode)     ;
/*function.ftp-get.html*/
      int  ftp_get   (int ftp_stream, string local_file, string remote_file, int mode)     ;
/*function.ftp-login.html*/
      int  ftp_login   (int ftp_stream, string username, string password)     ;
/*function.ftp-mdtm.html*/
      int  ftp_mdtm   (int ftp_stream, string remote_file)     ;
/*function.ftp-mkdir.html*/
      string  ftp_mkdir   (int ftp_stream, string directory)     ;
/*function.ftp-nlist.html*/
      int  ftp_nlist   (int ftp_stream, string directory)     ;
/*function.ftp-pasv.html*/
      int  ftp_pasv   (int ftp_stream, int pasv)     ;
/*function.ftp-put.html*/
      int  ftp_put   (int ftp_stream, string remote_file, string local_file, int mode)     ;
/*function.ftp-pwd.html*/
      int  ftp_pwd   (int ftp_stream)     ;
/*function.ftp-quit.html*/
      int  ftp_quit   (int ftp_stream)     ;
/*function.ftp-rawlist.html*/
      int  ftp_rawlist   (int ftp_stream, string directory)     ;
/*function.ftp-rename.html*/
      int  ftp_rename   (int ftp_stream, string from, string to)     ;
/*function.ftp-rmdir.html*/
      int  ftp_rmdir   (int ftp_stream, string directory)     ;
/*function.ftp-site.html*/
      int  ftp_site   (int ftp_stream, string cmd)     ;
/*function.ftp-size.html*/
      int  ftp_size   (int ftp_stream, string remote_file)     ;
/*function.ftp-systype.html*/
      int  ftp_systype   (int ftp_stream)     ;
/*function.ftruncate.html*/
      int  ftruncate   (int fp, int size)     ;
/*function.func-get-arg.html*/
      int  func_get_arg   (int arg_num)     ;
/*function.func-get-args.html*/
      int  func_get_args   (void )     ;
/*function.func-num-args.html*/
      int  func_num_args   (void )     ;
/*function.function-exists.html*/
      int  function_exists   (string function_name)     ;
/*function.fwrite.html*/
      int  fwrite   (int fp, string string /*, int         length*/)     ;
      int  fwrite   (int fp, string string , int         length)     ;
/*function.get-browser.html*/
      object  get_browser   (/*string         user_agent*/)     ;
      object  get_browser   (string         user_agent)     ;
/*function.get-cfg-var.html*/
      string  get_cfg_var   (string varname)     ;
/*function.get-class-methods.html*/
      array  get_class_methods   (string class_name)     ;
/*function.get-class-vars.html*/
      array  get_class_vars   (string class_name)     ;
/*function.get-class.html*/
      string  get_class   (object obj)     ;
/*function.get-current-user.html*/
      string  get_current_user   (void)     ;
/*function.get-declared-classes.html*/
      array  get_declared_classes   (void)     ;
/*function.get-extension-funcs.html*/
      array  get_extension_funcs   (string module_name)     ;
/*function.get-html-translation-table.html*/
      string          get_html_translation_table          (int table)     ;
/*function.get-included-files.html*/
      array  get_included_files   (void)     ;
/*function.get-loaded-extensions.html*/
      array  get_loaded_extensions   (void)     ;
/*function.get-magic-quotes-gpc.html*/
      long  get_magic_quotes_gpc   (void)     ;
/*function.get-magic-quotes-runtime.html*/
      long          get_magic_quotes_runtime          (void)     ;
/*function.get-meta-tags.html*/
      array  get_meta_tags   (string filename /*, int        use_include_path*/)     ;
      array  get_meta_tags   (string filename , int        use_include_path)     ;
/*function.get-object-vars.html*/
      array  get_object_vars   (object obj)     ;
/*function.get-parent-class.html*/
      string  get_parent_class   (object obj)     ;
/*function.get-required-files.html*/
      array  get_required_files   (void)     ;
/*function.getallheaders.html*/
      array  getallheaders   (void)     ;
/*function.getdate.html*/
      array  getdate   (int timestamp)     ;
/*function.getenv.html*/
      string  getenv   (string varname)     ;
/*function.gethostbyaddr.html*/
      string  gethostbyaddr   (string ip_address)     ;
/*function.gethostbyname.html*/
      string  gethostbyname   (string hostname)     ;
/*function.gethostbynamel.html*/
      array  gethostbynamel   (string hostname)     ;
/*function.getimagesize.html*/
      array  getimagesize   (string filename /*, array         imageinfo*/)     ;
      array  getimagesize   (string filename , array         imageinfo)     ;
/*function.getlastmod.html*/
      int  getlastmod   (void)     ;
/*function.getmxrr.html*/
      int  getmxrr   (string hostname, array mxhosts /*, array         weight*/)     ;
      int  getmxrr   (string hostname, array mxhosts , array         weight)     ;
/*function.getmyinode.html*/
      int  getmyinode   (void)     ;
/*function.getmypid.html*/
      int  getmypid   (void)     ;
/*function.getmyuid.html*/
      int  getmyuid   (void)     ;
/*function.getprotobyname.html*/
      int  getprotobyname   (string name)     ;
/*function.getprotobynumber.html*/
      string  getprotobynumber   (int number)     ;
/*function.getrandmax.html*/
      int  getrandmax   (void)     ;
/*function.getrusage.html*/
      array  getrusage   (/*int         who*/)     ;
      array  getrusage   (int         who)     ;
/*function.getservbyname.html*/
      int  getservbyname   (string service, string protocol)     ;
/*function.getservbyport.html*/
      string  getservbyport   (int port, string protocol)     ;
/*function.gettext.html*/
      string  gettext   (string message)     ;
/*function.gettimeofday.html*/
      array  gettimeofday   (void)     ;
/*function.gettype.html*/
      string  gettype   (mixed var)     ;
/*function.gmdate.html*/
      string  gmdate   (string format, int timestamp)     ;
/*function.gmmktime.html*/
      int  gmmktime   (int hour, int minute, int second, int month, int day, int year /*, int         is_dst*/)     ;
      int  gmmktime   (int hour, int minute, int second, int month, int day, int year , int         is_dst)     ;
/*function.gmstrftime.html*/
      string  gmstrftime   (string format, int timestamp)     ;
/*function.gregoriantojd.html*/
      int  gregoriantojd   (int month, int day, int year)     ;
/*function.gzclose.html*/
      int  gzclose   (int zp)     ;
/*function.gzcompress.html*/
      string  gzcompress   (string data /*, int         level*/)     ;
      string  gzcompress   (string data , int         level)     ;
/*function.gzeof.html*/
      int  gzeof   (int zp)     ;
/*function.gzfile.html*/
      array  gzfile   (string filename /*, int         use_include_path*/)     ;
      array  gzfile   (string filename , int         use_include_path)     ;
/*function.gzgetc.html*/
      string  gzgetc   (int zp)     ;
/*function.gzgets.html*/
      string  gzgets   (int zp, int length)     ;
/*function.gzgetss.html*/
      string  gzgetss   (int zp, int length /*, string         allowable_tags*/)     ;
      string  gzgetss   (int zp, int length , string         allowable_tags)     ;
/*function.gzopen.html*/
      int  gzopen   (string filename, string mode /*, int         use_include_path*/)     ;
      int  gzopen   (string filename, string mode , int         use_include_path)     ;
/*function.gzpassthru.html*/
      int  gzpassthru   (int zp)     ;
/*function.gzputs.html*/
      int  gzputs   (int zp, string str /*, int         length*/)     ;
      int  gzputs   (int zp, string str , int         length)     ;
/*function.gzread.html*/
      string  gzread   (int zp, int length)     ;
/*function.gzrewind.html*/
      int  gzrewind   (int zp)     ;
/*function.gzseek.html*/
      int  gzseek   (int zp, int offset)     ;
/*function.gztell.html*/
      int  gztell   (int zp)     ;
/*function.gzuncompress.html*/
      string  gzcompress   (string data /*, int         length*/)     ;
      string  gzcompress   (string data , int         length)     ;
/*function.gzwrite.html*/
      int  gzwrite   (int zp, string string /*, int         length*/)     ;
      int  gzwrite   (int zp, string string , int         length)     ;
/*function.header.html*/
      int  header   (string string)     ;
/*function.headers-sent.html*/
      bool  headers_sent   (void)     ;
/*function.hebrev.html*/
      string  hebrev   (string hebrew_text /*, int  	    max_chars_per_line*/)     ;
      string  hebrev   (string hebrew_text , int  	    max_chars_per_line)     ;
/*function.hebrevc.html*/
      string  hebrevc   (string hebrew_text /*, int  	    max_chars_per_line*/)     ;
      string  hebrevc   (string hebrew_text , int  	    max_chars_per_line)     ;
/*function.hexdec.html*/
      int  hexdec   (string hex_string)     ;
/*function.highlight-file.html*/
      void  highlight_file   (string filename)     ;
/*function.highlight-string.html*/
      void  highlight_string   (string str)     ;
/*function.htmlentities.html*/
      string  htmlentities   (string string)     ;
/*function.htmlspecialchars.html*/
      string  htmlspecialchars   (string string)     ;
/*function.hw-array2objrec.html*/
      string  hw_array2objrec   (array object_array)     ;
/*function.hw-children.html*/
      array  hw_children   (int connection, int objectID)     ;
/*function.hw-childrenobj.html*/
      array  hw_childrenobj   (int connection, int objectID)     ;
/*function.hw-close.html*/
      int  hw_close   (int connection)     ;
/*function.hw-connect.html*/
      int  hw_connect   (string host, int port, string username, string password)     ;
/*function.hw-cp.html*/
      int  hw_cp   (int connection, array object_id_array, int destination_id)     ;
/*function.hw-deleteobject.html*/
      int  hw_deleteobject   (int connection, int object_to_delete)     ;
/*function.hw-docbyanchor.html*/
      int  hw_docbyanchor   (int connection, int anchorID)     ;
/*function.hw-docbyanchorobj.html*/
      string  hw_docbyanchorobj   (int connection, int anchorID)     ;
/*function.hw-documentattributes.html*/
      string  hw_documentattributes   (int hw_document)     ;
/*function.hw-documentbodytag.html*/
      string  hw_documentbodytag   (int hw_document)     ;
/*function.hw-documentcontent.html*/
      string  hw_documentcontent   (int hw_document)     ;
/*function.hw-documentsetcontent.html*/
      string  hw_documentsetcontent   (int hw_document, string content)     ;
/*function.hw-documentsize.html*/
      int  hw_documentsize   (int hw_document)     ;
/*function.hw-edittext.html*/
      int  hw_edittext   (int connection, int hw_document)     ;
/*function.hw-error.html*/
      int  hw_error   (int connection)     ;
/*function.hw-errormsg.html*/
      string  hw_errormsg   (int connection)     ;
/*function.hw-free-document.html*/
      int  hw_free_document   (int hw_document)     ;
/*function.hw-getanchors.html*/
      array  hw_getanchors   (int connection, int objectID)     ;
/*function.hw-getanchorsobj.html*/
      array  hw_getanchorsobj   (int connection, int objectID)     ;
/*function.hw-getandlock.html*/
      string  hw_getandlock   (int connection, int objectID)     ;
/*function.hw-getchildcoll.html*/
      array  hw_getchildcoll   (int connection, int objectID)     ;
/*function.hw-getchildcollobj.html*/
      array  hw_getchildcollobj   (int connection, int objectID)     ;
/*function.hw-getchilddoccoll.html*/
      array  hw_getchilddoccoll   (int connection, int objectID)     ;
/*function.hw-getchilddoccollobj.html*/
      array  hw_getchilddoccollobj   (int connection, int objectID)     ;
/*function.hw-getobject.html*/
      array  hw_getobject   (int connection, int objectID, string query)     ;
      array  hw_getobject   (int connection, array objectID, string query)     ;
/*function.hw-getobjectbyquery.html*/
      array  hw_getobjectbyquery   (int connection, string query, int max_hits)     ;
/*function.hw-getobjectbyquerycoll.html*/
      array  hw_getobjectbyquerycoll   (int connection, int objectID, string query, int max_hits)     ;
/*function.hw-getobjectbyquerycollobj.html*/
      array  hw_getobjectbyquerycollobj   (int connection, int objectID, string query, int max_hits)     ;
/*function.hw-getobjectbyqueryobj.html*/
      array  hw_getobjectbyqueryobj   (int connection, string query, int max_hits)     ;
/*function.hw-getparents.html*/
      array  hw_getparentsobj   (int connection, int objectID)     ;
/*function.hw-getparentsobj.html*/
      array  hw_getparentsobj   (int connection, int objectID)     ;
/*function.hw-getremote.html*/
      int  hw_getremote   (int connection, int objectID)     ;
/*function.hw-getremotechildren.html*/
      int  hw_getremotechildren   (int connection, string object_record)     ;
/*function.hw-getsrcbydestobj.html*/
      array  hw_getsrcbydestobj   (int connection, int objectID)     ;
/*function.hw-gettext.html*/
      int  hw_gettext   (int connection, int objectID /*, mixed         rootID/prefix*/)     ;
      int  hw_gettext   (int connection, int objectID , mixed         rootID_or_prefix)     ;
/*function.hw-getusername.html*/
      string  hw_getusername   (int connection)     ;
/*function.hw-identify.html*/
      int  hw_identify   (string username, string password)     ;
/*function.hw-incollections.html*/
      array  hw_incollections   (int connection, array object_id_array, array collection_id_array, int return_collections)     ;
/*function.hw-info.html*/
      string  hw_info   (int connection)     ;
/*function.hw-inscoll.html*/
      int  hw_inscoll   (int connection, int objectID, array object_array)     ;
/*function.hw-insdoc.html*/
      int  hw_insdoc   (int connection, int parentID, string object_record, string text)     ;
/*function.hw-insertdocument.html*/
      int  hw_insertdocument   (int connection, int parent_id, int hw_document)     ;
/*function.hw-insertobject.html*/
      int  hw_insertobject   (int connection, string object_rec, string parameter)     ;
/*function.hw-mapid.html*/
      int  hw_mapid   (int connection, int server_id, int object_id)     ;
/*function.hw-modifyobject.html*/
      int  hw_modifyobject   (int connection, int object_to_change, array remove, array add, int mode)     ;
/*function.hw-mv.html*/
      int  hw_mv   (int connection, array object_id_array, int source_id, int destination_id)     ;
/*function.hw-new-document.html*/
      int  hw_new_document   (string object_record, string document_data, int document_size)     ;
/*function.hw-objrec2array.html*/
      array  hw_objrec2array   (string object_record)     ;
/*function.hw-outputdocument.html*/
      int  hw_outputdocument   (int hw_document)     ;
/*function.hw-pconnect.html*/
      int  hw_pconnect   (string host, int port, string username, string password)     ;
/*function.hw-pipedocument.html*/
      int  hw_pipedocument   (int connection, int objectID)     ;
/*function.hw-root.html*/
      int  hw_root   ()     ;
/*function.hw-unlock.html*/
      int  hw_unlock   (int connection, int objectID)     ;
/*function.hw-who.html*/
      int  hw_who   (int connection)     ;
/*function.ibase-bind.html*/
    int ibase_bind (int query);   ;
/*function.ibase-close.html*/
      int  ibase_close   (/*int         connection_id*/)     ;
      int  ibase_close   (int         connection_id)     ;
/*function.ibase-connect.html*/
      int  ibase_connect   (string database /*, string         username , string         password , string         charset , int         buffers , int         dialect , string         role*/)     ;
      int  ibase_connect   (string database , string         username , string         password , string         charset , int         buffers , int         dialect , string         role)     ;
/*function.ibase-execute.html*/
      int  ibase_execute   (int         query /*, int         bind_args*/)     ;
      int  ibase_execute   (int         query , int         bind_args)     ;
/*function.ibase-fetch-object.html*/
      object  ibase_fetch_object   (int        result_id)     ;
/*function.ibase-fetch-row.html*/
      array  ibase_fetch_row   (int        result_identifier)     ;
/*function.ibase-free-query.html*/
      int  ibase_free_query   (int        query)     ;
/*function.ibase-free-result.html*/
      int  ibase_free_result   (int        result_identifier)     ;
/*function.ibase-num-fields.html*/
      int  ibase_num_fields   (int result_id)     ;
/*function.ibase-pconnect.html*/
      int  ibase_connect   (string database /*, string         username*//*, string         password*//*, string         charset*//*, string         role*/)     ;
      int  ibase_connect   (string database , string         username/*, string         password*//*, string         charset*//*, string         role*/)     ;
      int  ibase_connect   (string database , string         username, string         password/*, string         charset*//*, string         role*/)     ;
      int  ibase_connect   (string database , string         username, string         password, string         charset/*, string         role*/)     ;
      int  ibase_connect   (string database , string         username, string         password, string         charset, string         role)     ;
/*function.ibase-prepare.html*/
      int  ibase_prepare   (/*int         link_identifier, string query*/)     ;
      int  ibase_prepare   (int         link_identifier, string query)     ;
/*function.ibase-query.html*/
      int  ibase_query   (/*int         link_identifier, string        query*/ /*, int         bind_args*/)     ;
      int  ibase_query   (int         link_identifier, string        query /*, int         bind_args*/)     ;
      int  ibase_query   (int         link_identifier, string        query , int         bind_args)     ;
/*function.ibase-timefmt.html*/
      int  ibase_timefmt   (string        format /*, int        columntype*/)     ;
      int  ibase_timefmt   (string        format , int        columntype)     ;
/*function.icap-close.html*/
      int  icap_close   (int icap_stream /*, int         flags*/)     ;
      int  icap_close   (int icap_stream , int         flags)     ;
/*function.icap-delete-event.html*/
      string  icap_delete_event   (int sream_id, int uid)     ;
/*function.icap-fetch-event.html*/
      int  icap_fetch_event   (int stream_id, int event_id /*, int         options*/)     ;
      int  icap_fetch_event   (int stream_id, int event_id , int         options)     ;
/*function.icap-list-alarms.html*/
      int  icap_list_alarms   (int stream_id, array date, array time)     ;
/*function.icap-list-events.html*/
      array  icap_list_events   (int stream_id, int begin_date /*, int         end_date*/)     ;
      array  icap_list_events   (int stream_id, int begin_date , int         end_date)     ;
/*function.icap-open.html*/
      int  icap_open   (string calendar, string username, string password, string options)     ;
/*function.icap-snooze.html*/
      string  icap_snooze   (int stream_id, int uid)     ;
/*function.icap-store-event.html*/
      string  icap_store_event   (int stream_id, object event)     ;
/*function.ifx-affected-rows.html*/
      int  ifx_affected_rows   (int result_id)     ;
/*function.ifx-blobinfile-mode.html*/
      void  ifx_blobinfile_mode   (int mode)     ;
/*function.ifx-byteasvarchar.html*/
      void  ifx_byteasvarchar   (int mode)     ;
/*function.ifx-close.html*/
      int  ifx_close   (/*int         link_identifier*/)     ;
      int  ifx_close   (int         link_identifier)     ;
/*function.ifx-connect.html*/
      int  ifx_connect   (/*string database *//*, string userid *//*, string password*/)     ;
      int  ifx_connect   (string database /*, string userid *//*, string password*/)     ;
      int  ifx_connect   (string database , string userid /*, string password*/)     ;
      int  ifx_connect   (string database , string userid , string password)     ;
/*function.ifx-copy-blob.html*/
      int  ifx_copy_blob   (int bid)     ;
/*function.ifx-create-blob.html*/
      int  ifx_create_blob   (int type, int mode, string param)     ;
/*function.ifx-create-char.html*/
      int  ifx_create_char   (string param)     ;
/*function.ifx-do.html*/
      int  ifx_do   (int result_id)     ;
/*function.ifx-error.html*/
      string  ifx_error  (void);     ;
/*function.ifx-errormsg.html*/
      string  ifx_errormsg   (/*int         errorcode*/)     ;
      string  ifx_errormsg   (int         errorcode)     ;
/*function.ifx-fetch-row.html*/
      array  ifx_fetch_row   (int result_id /*, mixed         position*/)     ;
      array  ifx_fetch_row   (int result_id , mixed         position)     ;
/*function.ifx-fieldproperties.html*/
      array  ifx_fieldproperties   (int result_id)     ;
/*function.ifx-fieldtypes.html*/
      array  ifx_fieldtypes   (int result_id)     ;
/*function.ifx-free-blob.html*/
      int  ifx_free_blob   (int bid)     ;
/*function.ifx-free-char.html*/
      int  ifx_free_char   (int bid)     ;
/*function.ifx-free-result.html*/
      int  ifx_free_result   (int result_id)     ;
/*function.ifx-get-blob.html*/
      int  ifx_get_blob   (int bid)     ;
/*function.ifx-get-char.html*/
      int  ifx_get_char   (int bid)     ;
/*function.ifx-getsqlca.html*/
      array  ifx_getsqlca   (int result_id)     ;
/*function.ifx-htmltbl-result.html*/
      int  ifx_htmltbl_result   (int result_id /*, string         html_table_options*/)     ;
      int  ifx_htmltbl_result   (int result_id , string         html_table_options)     ;
/*function.ifx-nullformat.html*/
      void  ifx_nullformat   (int mode)     ;
/*function.ifx-num-fields.html*/
      int  ifx_num_fields   (int result_id)     ;
/*function.ifx-num-rows.html*/
      int  ifx_num_rows   (int result_id)     ;
/*function.ifx-pconnect.html*/
      int  ifx_pconnect   (/*string         database*/ /*, string         userid*/ /*, string         password*/)     ;
      int  ifx_pconnect   (string         database /*, string         userid*/ /*, string         password*/)     ;
      int  ifx_pconnect   (string         database , string         userid /*, string         password*/)     ;
      int  ifx_pconnect   (string         database , string         userid , string         password)     ;
/*function.ifx-prepare.html*/
      int  ifx_prepare   (string query, int conn_id /*, int         cursor_def, mixed blobidarray*/)     ;
      int  ifx_prepare   (string query, int conn_id , int         cursor_def, mixed blobidarray)     ;
/*function.ifx-query.html*/
      int  ifx_query   (string query /*, int         link_identifier*/ /*, int         cursor_type*/ /*, mixed         blobidarray*/)     ;
      int  ifx_query   (string query , int         link_identifier /*, int         cursor_type*/ /*, mixed         blobidarray*/)     ;
      int  ifx_query   (string query , int         link_identifier , int         cursor_type /*, mixed         blobidarray*/)     ;
      int  ifx_query   (string query , int         link_identifier , int         cursor_type , mixed         blobidarray)     ;
/*function.ifx-textasvarchar.html*/
      void  ifx_textasvarchar   (int mode)     ;
/*function.ifx-update-blob.html*/
      bool ifx_update_blob   (int bid, string content)     ;
/*function.ifx-update-char.html*/
      int  ifx_update_char   (int bid, string content)     ;
/*function.ifxus-close-slob.html*/
      int  ifxus_close_slob   (int bid)     ;
/*function.ifxus-create-slob.html*/
      int  ifxus_create_slob   (int mode)     ;
/*function.ifxus-free-slob.html*/
      int  ifxus_free_slob   (int bid)     ;
/*function.ifxus-open-slob.html*/
      int  ifxus_open_slob   (long bid, int mode)     ;
/*function.ifxus-read-slob.html*/
      int  ifxus_read_slob   (long bid, long nbytes)     ;
/*function.ifxus-seek-slob.html*/
      int  ifxus_seek_blob   (long bid, int mode, long offset)     ;
/*function.ifxus-tell-slob.html*/
      int  ifxus_tell_slob   (long bid)     ;
/*function.ifxus-write-slob.html*/
      int  ifxus_write_slob   (long bid, string content)     ;
/*function.ignore-user-abort.html*/
      int  ignore_user_abort   (/*int         setting*/)     ;
      int  ignore_user_abort   (int         setting)     ;
/*function.imagearc.html*/
      int  imagearc   (int im, int cx, int cy, int w, int h, int s, int e, int col)     ;
/*function.imagechar.html*/
      int  imagechar   (int im, int font, int x, int y, string c, int col)     ;
/*function.imagecharup.html*/
      int  imagecharup   (int im, int font, int x, int y, string c, int col)     ;
/*function.imagecolorallocate.html*/
      int  imagecolorallocate   (int im, int red, int green, int blue)     ;
/*function.imagecolorat.html*/
      int  imagecolorat   (int im, int x, int y)     ;
/*function.imagecolorclosest.html*/
      int  imagecolorclosest   (int im, int red, int green, int blue)     ;
/*function.imagecolordeallocate.html*/
      int          imagecolordeallocate          (int         im, int         index)     ;
/*function.imagecolorexact.html*/
      int  imagecolorexact   (int im, int red, int green, int blue)     ;
/*function.imagecolorresolve.html*/
      int  imagecolorresolve   (int im, int red, int green, int blue)     ;
/*function.imagecolorset.html*/
      bool  imagecolorset   (int im, int index, int red, int green, int blue)     ;
/*function.imagecolorsforindex.html*/
      array  imagecolorsforindex   (int im, int index)     ;
/*function.imagecolorstotal.html*/
      int  imagecolorstotal   (int im)     ;
/*function.imagecolortransparent.html*/
      int  imagecolortransparent   (int im /*, int         col*/)     ;
      int  imagecolortransparent   (int im , int         col)     ;
/*function.imagecopy.html*/
      int          ImageCopy          (int         dst_im, int        src_im, int        dst_x, int         dst_y, int         src_x, int         src_y, int         src_w, int         src_h)     ;
/*function.imagecopyresized.html*/
      int  imagecopyresized   (int dst_im, int src_im, int dstX, int dstY, int srcX, int srcY, int dstW, int dstH, int srcW, int srcH)     ;
/*function.imagecreate.html*/
      int  imagecreate   (int x_size, int y_size)     ;
/*function.imagecreatefromgif.html*/
      int  imagecreatefromgif   (string filename)     ;
/*function.imagecreatefromjpeg.html*/
      int  imagecreatefromjpeg   (string filename)     ;
/*function.imagecreatefrompng.html*/
      int  imagecreatefrompng   (string filename)     ;
/*function.imagedashedline.html*/
      int  imagedashedline   (int im, int x1, int y1, int x2, int y2, int col)     ;
/*function.imagedestroy.html*/
      int  imagedestroy   (int im)     ;
/*function.imagefill.html*/
      int  imagefill   (int im, int x, int y, int col)     ;
/*function.imagefilledpolygon.html*/
      int  imagefilledpolygon   (int im, array points, int num_points, int col)     ;
/*function.imagefilledrectangle.html*/
      int  imagefilledrectangle   (int im, int x1, int y1, int x2, int y2, int col)     ;
/*function.imagefilltoborder.html*/
      int  imagefilltoborder   (int im, int x, int y, int border, int col)     ;
/*function.imagefontheight.html*/
      int  imagefontheight   (int font)     ;
/*function.imagefontwidth.html*/
      int  imagefontwidth   (int font)     ;
/*function.imagegammacorrect.html*/
      int          imagegammacorrect          (int         im, double         inputgamma, double         outputgamma)     ;
/*function.imagegif.html*/
      int  imagegif   (int im /*, string         filename*/)     ;
      int  imagegif   (int im , string         filename)     ;
/*function.imageinterlace.html*/
      int  imageinterlace   (int im /*, int         interlace*/)     ;
      int  imageinterlace   (int im , int         interlace)     ;
/*function.imagejpeg.html*/
      int  imagejpeg   (int im /*, string         filename *//*, int         quality*/)     ;
      int  imagejpeg   (int im , string         filename /*, int         quality*/)     ;
      int  imagejpeg   (int im , string         filename , int         quality)     ;
/*function.imageline.html*/
      int  imageline   (int im, int x1, int y1, int x2, int y2, int col)     ;
/*function.imageloadfont.html*/
      int  imageloadfont   (string file)     ;
/*function.imagepng.html*/
      int          imagepng          (int im /*, string filename*/)     ;
      int          imagepng          (int im , string filename)     ;
/*function.imagepolygon.html*/
      int  imagepolygon   (int im, array points, int num_points, int col)     ;
/*function.imagepsbbox.html*/
      array  imagepsbbox   (string text, int font, int size /*, int space *//*, int tightness *//*, float angle*/)     ;
      array  imagepsbbox   (string text, int font, int size , int space /*, int tightness *//*, float angle*/)     ;
      array  imagepsbbox   (string text, int font, int size , int space , int tightness /*, float angle*/)     ;
      array  imagepsbbox   (string text, int font, int size , int space , int tightness , float angle)     ;
/*function.imagepsencodefont.html*/
      int  imagepsencodefont   (string encodingfile)     ;
/*function.imagepsextendfont.html*/
      bool         imagepsextendfont          (int         font_index, double         extend)     ;
/*function.imagepsfreefont.html*/
      void  imagepsfreefont   (int fontindex)     ;
/*function.imagepsloadfont.html*/
      int  imagepsloadfont   (string filename)     ;
/*function.imagepsslantfont.html*/
      bool          imagepsslantfont          (int         font_index, double         slant)     ;
/*function.imagepstext.html*/
      array  imagepstext   (int image, string text, int font, int size, int foreground, int background, int x, int y /*, int         space*//*, int         tightness*//*, float         angle *//*, int         antialias_steps*/)     ;
      array  imagepstext   (int image, string text, int font, int size, int foreground, int background, int x, int y , int         space/*, int         tightness*//*, float         angle *//*, int         antialias_steps*/)     ;
      array  imagepstext   (int image, string text, int font, int size, int foreground, int background, int x, int y , int         space, int         tightness/*, float         angle *//*, int         antialias_steps*/)     ;
      array  imagepstext   (int image, string text, int font, int size, int foreground, int background, int x, int y , int         space, int         tightness, float         angle /*, int         antialias_steps*/)     ;
      array  imagepstext   (int image, string text, int font, int size, int foreground, int background, int x, int y , int         space, int         tightness, float         angle , int         antialias_steps)     ;
/*function.imagerectangle.html*/
      int  imagerectangle   (int im, int x1, int y1, int x2, int y2, int col)     ;
/*function.imagesetpixel.html*/
      int  imagesetpixel   (int im, int x, int y, int col)     ;
/*function.imagestring.html*/
      int  imagestring   (int im, int font, int x, int y, string s, int col)     ;
/*function.imagestringup.html*/
      int  imagestringup   (int im, int font, int x, int y, string s, int col)     ;
/*function.imagesx.html*/
      int  imagesx   (int im)     ;
/*function.imagesy.html*/
      int  imagesy   (int im)     ;
/*function.imagettfbbox.html*/
      array  imagettfbbox   (int size, int angle, string fontfile, string text)     ;
/*function.imagettftext.html*/
      array  imagettftext   (int im, int size, int angle, int x, int y, int col, string fontfile, string text)     ;
/*function.imagetypes.html*/
      int  imagetypes  (void);     ;
/*function.imap-8bit.html*/
      string  imap_8bit   (string string)     ;
/*function.imap-alerts.html*/
      array  imap_alerts   (void)     ;
/*function.imap-append.html*/
      int  imap_append   (int imap_stream, string mbox, string message /*, string         flags*/)     ;
      int  imap_append   (int imap_stream, string mbox, string message , string         flags)     ;
/*function.imap-base64.html*/
      string  imap_base64   (string text)     ;
/*function.imap-binary.html*/
      string  imap_binary   (string string)     ;
/*function.imap-body.html*/
      string  imap_body   (int imap_stream, int msg_number /*, int flags*/)     ;
      string  imap_body   (int imap_stream, int msg_number , int flags)     ;
/*function.imap-check.html*/
      object  imap_check   (int imap_stream)     ;
/*function.imap-clearflag-full.html*/
      string          imap_clearflag_full          (int stream, string sequence, string flag, string options)     ;
/*function.imap-close.html*/
      int  imap_close   (int imap_stream /*, int         flags*/)     ;
      int  imap_close   (int imap_stream , int         flags)     ;
/*function.imap-createmailbox.html*/
      int  imap_createmailbox   (int imap_stream, string mbox)     ;
/*function.imap-delete.html*/
      int  imap_delete   (int imap_stream, int msg_number /*, int         flags*/)     ;
      int  imap_delete   (int imap_stream, int msg_number , int         flags)     ;
/*function.imap-deletemailbox.html*/
      int  imap_deletemailbox   (int imap_stream, string mbox)     ;
/*function.imap-errors.html*/
      array  imap_errors   (void)     ;
/*function.imap-expunge.html*/
      int  imap_expunge   (int imap_stream)     ;
/*function.imap-fetch-overview.html*/
      array  imap_fetch_overview   (int imap_stream, string sequence /*, int flags*/)     ;
      array  imap_fetch_overview   (int imap_stream, string sequence , int flags)     ;
/*function.imap-fetchbody.html*/
      string  imap_fetchbody   (int imap_stream, int msg_number, string part_number /*, flags         flags*/)     ;
      string  imap_fetchbody   (int imap_stream, int msg_number, string part_number , int         flags)     ;
/*function.imap-fetchheader.html*/
      string  imap_fetchheader   (int imap_stream, int msgno, int flags)     ;
/*function.imap-fetchstructure.html*/
      object         imap_fetchstructure          (int imap_stream, int msg_number /*, int         flags*/)     ;
      object         imap_fetchstructure          (int imap_stream, int msg_number , int         flags)     ;
/*function.imap-getmailboxes.html*/
      array  imap_getmailboxes   (int imap_stream, string ref, string pattern)     ;
/*function.imap-getsubscribed.html*/
      array  imap_getsubscribed   (int imap_stream, string ref, string pattern)     ;
/*function.imap-header.html*/
      object  imap_header   (int imap_stream, int msg_number /*, int         fromlength *//*, int         subjectlength *//*, string         defaulthost*/)     ;
      object  imap_header   (int imap_stream, int msg_number , int         fromlength /*, int         subjectlength *//*, string         defaulthost*/)     ;
      object  imap_header   (int imap_stream, int msg_number , int         fromlength , int         subjectlength /*, string         defaulthost*/)     ;
      object  imap_header   (int imap_stream, int msg_number , int         fromlength , int         subjectlength , string         defaulthost)     ;
/*function.imap-headers.html*/
      array  imap_headers   (int imap_stream)     ;
/*function.imap-last-error.html*/
      string  imap_last_error   (void)     ;
/*function.imap-listmailbox.html*/
      array  imap_listmailbox   (int imap_stream, string ref, string pattern)     ;
/*function.imap-listsubscribed.html*/
      array  imap_listsubscribed   (int imap_stream, string ref, string pattern)     ;
/*function.imap-mail-compose.html*/
      string  imap_mail_compose   (array envelope, array body)     ;
/*function.imap-mail-copy.html*/
      int  imap_mail_copy   (int imap_stream, string msglist, string mbox /*, int         flags*/)     ;
      int  imap_mail_copy   (int imap_stream, string msglist, string mbox , int         flags)     ;
/*function.imap-mail-move.html*/
      int  imap_mail_move   (int imap_stream, string msglist, string mbox /*, int         flags*/)     ;
      int  imap_mail_move   (int imap_stream, string msglist, string mbox , int         flags)     ;
/*function.imap-mail.html*/
      string  imap_mail   (string to, string subject, string message /*, string         additional_headers *//*, string         cc *//*, string         bcc *//*, string         rpath*/)     ;
      string  imap_mail   (string to, string subject, string message , string         additional_headers /*, string         cc *//*, string         bcc *//*, string         rpath*/)     ;
      string  imap_mail   (string to, string subject, string message , string         additional_headers , string         cc /*, string         bcc *//*, string         rpath*/)     ;
      string  imap_mail   (string to, string subject, string message , string         additional_headers , string         cc , string         bcc /*, string         rpath*/)     ;
      string  imap_mail   (string to, string subject, string message , string         additional_headers , string         cc , string         bcc , string         rpath)     ;
/*function.imap-mailboxmsginfo.html*/
      object  imap_mailboxmsginfo   (int imap_stream)     ;
/*function.imap-mime-header-decode.html*/
      array  imap_header_decode   (string text)     ;
/*function.imap-msgno.html*/
      int  imap_msgno   (int imap_stream, int uid)     ;
/*function.imap-num-msg.html*/
      int  imap_num_msg   (int imap_stream)     ;
/*function.imap-num-recent.html*/
      int  imap_num_recent   (int imap_stream)     ;
/*function.imap-open.html*/
      int  imap_open   (string mailbox, string username, string password /*, int         flags*/)     ;
      int  imap_open   (string mailbox, string username, string password , int         flags)     ;
/*function.imap-ping.html*/
      int  imap_ping   (int imap_stream)     ;
/*function.imap-qprint.html*/
      string  imap_qprint   (string string)     ;
/*function.imap-renamemailbox.html*/
      int  imap_renamemailbox   (int imap_stream, string old_mbox, string new_mbox)     ;
/*function.imap-reopen.html*/
      int  imap_reopen   (int imap_stream, string mailbox /*, string        flags*/)     ;
      int  imap_reopen   (int imap_stream, string mailbox , string        flags)     ;
/*function.imap-rfc822-parse-adrlist.html*/
      array         imap_rfc822_parse_adrlist          (string address, string default_host)     ;
/*function.imap-rfc822-parse-headers.html*/
      object  imap_rfc822_parse_headers   (string headers /*, string         defaulthost*/)     ;
      object  imap_rfc822_parse_headers   (string headers , string         defaulthost)     ;
/*function.imap-rfc822-write-address.html*/
      string          imap_rfc822_write_address          (string mailbox, string host, string personal)     ;
/*function.imap-scanmailbox.html*/
      array  imap_scanmailbox   (int imap_stream, string content)     ;
/*function.imap-search.html*/
      array  imap_search   (int imap_stream, string criteria, int flags)     ;
/*function.imap-setflag-full.html*/
      string  imap_setflag_full   (int stream, string sequence, string flag, string options)     ;
/*function.imap-sort.html*/
      array  imap_sort   (int stream, int criteria, int reverse, int options)     ;
/*function.imap-status.html*/
      object  imap_status   (int imap_stream, string mailbox, int options)     ;
/*function.imap-subscribe.html*/
      int  imap_subscribe   (int imap_stream, string mbox)     ;
/*function.imap-uid.html*/
      int  imap_uid   (int imap_stream, int msgno)     ;
/*function.imap-undelete.html*/
      int  imap_undelete   (int imap_stream, int msg_number)     ;
/*function.imap-unsubscribe.html*/
      int  imap_unsubscribe   (int imap_stream, string mbox)     ;
/*function.imap-utf7-decode.html*/
      string  imap_utf7_decode   (string text)     ;
/*function.imap-utf7-encode.html*/
      string  imap_utf7_encode   (string data)     ;
/*function.imap-utf8.html*/
      string  imap_utf8   (string text)     ;
/*function.implode.html*/
      string  implode   (string glue, array pieces)     ;
/*function.in-array.html*/
      bool in_array  (mixed needle, array haystack)     ;
/*function.include-once.html*/
;
/*function.include.html*/
;
/*function.intval.html*/
      int  intval   (mixed var /*, int        base*/)     ;
      int  intval   (mixed var , int        base)     ;
      int  intval   (string var /*, int        base*/)     ;
      int  intval   (string var , int        base)     ;
/*function.ip2long.html*/
      int  ip2long   (string ip_address)     ;
/*function.iptcparse.html*/
      array  iptcparse   (string iptcblock)     ;
/*function.is-array.html*/
      int  is_array   (mixed var)     ;
      int  is_array   (array var)     ;
      int  is_array   (string var)     ;
      int  is_array   (int var)     ;
/*function.is-bool.html*/
      int           is_bool           (mixed          var)     ;
/*function.is-dir.html*/
      bool  is_dir   (string filename)     ;
/*function.is-double.html*/
      int  is_double   (mixed var)     ;
/*function.is-executable.html*/
      bool  is_executable   (string filename)     ;
/*function.is-file.html*/
      bool  is_file   (string filename)     ;
/*function.is-float.html*/
      int  is_float   (mixed var)     ;
/*function.is-int.html*/
      int  is_int   (mixed var)     ;
/*function.is-integer.html*/
      int  is_integer   (mixed var)     ;
/*function.is-link.html*/
      bool  is_link   (string filename)     ;
/*function.is-long.html*/
      int  is_long   (mixed var)     ;
/*function.is-numeric.html*/
      int  is_numeric   (mixed var)     ;
/*function.is-object.html*/
      int  is_object   (mixed var)     ;
/*function.is-readable.html*/
      bool  is_readable   (string filename)     ;
/*function.is-real.html*/
      int  is_real   (mixed var)     ;
/*function.is-resource.html*/
      int          is_resource          (mixed         var)     ;
/*function.is-string.html*/
      int  is_string   (mixed var)     ;
/*function.is-subclass-of.html*/
      bool  is_subclass_of   (object obj, string superclass)     ;
/*function.is-writeable.html*/
      bool  is_writeable   (string filename)     ;
/*function.isset.html*/
      int  isset   (mixed var)     ;
      int  isset   (string var)     ;
/*function.jddayofweek.html*/
      mixed  jddayofweek   (int julianday, int mode)     ;
/*function.jdmonthname.html*/
      string  jdmonthname   (int julianday, int mode)     ;
/*function.jdtofrench.html*/
      string  jdtofrench   (int month, int day, int year)     ;
/*function.jdtogregorian.html*/
      string  jdtogregorian   (int julianday)     ;
/*function.jdtojewish.html*/
      string  jdtojewish   (int julianday)     ;
/*function.jdtojulian.html*/
      string  jdtojulian   (int julianday)     ;
/*function.jdtounix.html*/
      int  jdtounix   (int jday)     ;
/*function.jewishtojd.html*/
      int  jewishtojd   (int month, int day, int year)     ;
/*function.join.html*/
      string  join   (string glue, array pieces)     ;
/*function.juliantojd.html*/
      int  juliantojd   (int month, int day, int year)     ;
/*function.key.html*/
      mixed  key   (array array)     ;
/*function.krsort.html*/
      int  krsort   (array array /*, int         sort_flags*/)     ;
      int  krsort   (array array , int         sort_flags)     ;
/*function.ksort.html*/
      int  ksort   (array array /*, int         sort_flags*/)     ;
      int  ksort   (array array , int         sort_flags)     ;
/*function.ldap-add.html*/
      int  ldap_add   (int link_identifier, string dn, array entry)     ;
/*function.ldap-bind.html*/
      int  ldap_bind   (int link_identifier /*, string bind_rdn *//*, string bind_password*/)     ;
      int  ldap_bind   (int link_identifier , string bind_rdn /*, string bind_password*/)     ;
      int  ldap_bind   (int link_identifier , string bind_rdn , string bind_password)     ;
/*function.ldap-close.html*/
      int  ldap_close   (int link_identifier)     ;
/*function.ldap-compare.html*/
      int  ldap_compare   (int link_identifier, string dn, string attribute, string value)     ;
/*function.ldap-connect.html*/
      int  ldap_connect   (/*string hostname *//*, int port*/)     ;
      int  ldap_connect   (string hostname /*, int port*/)     ;
      int  ldap_connect   (string hostname , int port)     ;
/*function.ldap-count-entries.html*/
      int  ldap_count_entries   (int link_identifier, int result_identifier)     ;
/*function.ldap-delete.html*/
      int  ldap_delete   (int link_identifier, string dn)     ;
/*function.ldap-dn2ufn.html*/
      string  ldap_dn2ufn   (string dn)     ;
/*function.ldap-err2str.html*/
      string  ldap_err2str   (int errno)     ;
/*function.ldap-errno.html*/
      int  ldap_errno   (int link_id)     ;
/*function.ldap-error.html*/
      string  ldap_error   (int link_id)     ;
/*function.ldap-explode-dn.html*/
      array  ldap_explode_dn   (string dn, int with_attrib)     ;
/*function.ldap-first-attribute.html*/
      string  ldap_first_attribute   (int link_identifier, int result_entry_identifier, int ber_identifier)     ;
/*function.ldap-first-entry.html*/
      int  ldap_first_entry   (int link_identifier, int result_identifier)     ;
/*function.ldap-free-result.html*/
      int  ldap_free_result   (int result_identifier)     ;
/*function.ldap-get-attributes.html*/
      array  ldap_get_attributes   (int link_identifier, int       result_entry_identifier)     ;
/*function.ldap-get-dn.html*/
      string  ldap_get_dn   (int link_identifier, int result_entry_identifier)     ;
/*function.ldap-get-entries.html*/
      array  ldap_get_entries   (int link_identifier, int result_identifier)     ;
/*function.ldap-get-values-len.html*/
      array  ldap_get_values_len   (int link_identifier, int result_entry_identifier, string attribute)     ;
/*function.ldap-get-values.html*/
      array  ldap_get_values   (int link_identifier, int result_entry_identifier, string attribute)     ;
/*function.ldap-list.html*/
      int  ldap_list   (int link_identifier, string base_dn, string filter /*, array        attributes *//*, int         attrsonly *//*, int         sizelimit *//*, int         timelimit *//*, int         deref*/)     ;
      int  ldap_list   (int link_identifier, string base_dn, string filter , array        attributes /*, int         attrsonly *//*, int         sizelimit *//*, int         timelimit *//*, int         deref*/)     ;
      int  ldap_list   (int link_identifier, string base_dn, string filter , array        attributes , int         attrsonly /*, int         sizelimit *//*, int         timelimit *//*, int         deref*/)     ;
      int  ldap_list   (int link_identifier, string base_dn, string filter , array        attributes , int         attrsonly , int         sizelimit /*, int         timelimit *//*, int         deref*/)     ;
      int  ldap_list   (int link_identifier, string base_dn, string filter , array        attributes , int         attrsonly , int         sizelimit , int         timelimit /*, int         deref*/)     ;
      int  ldap_list   (int link_identifier, string base_dn, string filter , array        attributes , int         attrsonly , int         sizelimit , int         timelimit , int         deref)     ;
/*function.ldap-mod-add.html*/
      int  ldap_mod_add   (int link_identifier, string dn, array entry)     ;
/*function.ldap-mod-del.html*/
      int  ldap_mod_del   (int link_identifier, string dn, array entry)     ;
/*function.ldap-mod-replace.html*/
      int  ldap_mod_replace   (int link_identifier, string dn, array entry)     ;
/*function.ldap-modify.html*/
      int  ldap_modify   (int link_identifier, string dn, array entry)     ;
/*function.ldap-next-attribute.html*/
      string  ldap_next_attribute   (int link_identifier, int result_entry_identifier, int ber_identifier)     ;
/*function.ldap-next-entry.html*/
      int  ldap_next_entry   (int link_identifier, int result_entry_identifier)     ;
/*function.ldap-read.html*/
      int  ldap_read   (int link_identifier, string base_dn, string filter /*, array         attributes*//*, int         attrsonly*//*, int         sizelimit*//*, int         timelimit*//*, int         deref*/)     ;
      int  ldap_read   (int link_identifier, string base_dn, string filter , array         attributes/*, int         attrsonly*//*, int         sizelimit*//*, int         timelimit*//*, int         deref*/)     ;
      int  ldap_read   (int link_identifier, string base_dn, string filter , array         attributes, int         attrsonly/*, int         sizelimit*//*, int         timelimit*//*, int         deref*/)     ;
      int  ldap_read   (int link_identifier, string base_dn, string filter , array         attributes, int         attrsonly, int         sizelimit/*, int         timelimit*//*, int         deref*/)     ;
      int  ldap_read   (int link_identifier, string base_dn, string filter , array         attributes, int         attrsonly, int         sizelimit, int         timelimit/*, int         deref*/)     ;
      int  ldap_read   (int link_identifier, string base_dn, string filter , array         attributes, int         attrsonly, int         sizelimit, int         timelimit, int         deref)     ;
/*function.ldap-search.html*/
      int  ldap_search   (int link_identifier, string base_dn, string filter /*, array         attributes*//*, int         attrsonly*//*, int         sizelimit*//*, int         timelimit*//*, int         deref*/)     ;
      int  ldap_search   (int link_identifier, string base_dn, string filter , array         attributes/*, int         attrsonly*//*, int         sizelimit*//*, int         timelimit*//*, int         deref*/)     ;
      int  ldap_search   (int link_identifier, string base_dn, string filter , array         attributes, int         attrsonly/*, int         sizelimit*//*, int         timelimit*//*, int         deref*/)     ;
      int  ldap_search   (int link_identifier, string base_dn, string filter , array         attributes, int         attrsonly, int         sizelimit/*, int         timelimit*//*, int         deref*/)     ;
      int  ldap_search   (int link_identifier, string base_dn, string filter , array         attributes, int         attrsonly, int         sizelimit, int         timelimit/*, int         deref*/)     ;
      int  ldap_search   (int link_identifier, string base_dn, string filter , array         attributes, int         attrsonly, int         sizelimit, int         timelimit, int         deref)     ;
/*function.ldap-unbind.html*/
      int  ldap_unbind   (int link_identifier)     ;
/*function.leak.html*/
      void  leak   (int bytes)     ;
/*function.levenshtein.html*/
      int  levenshtein   (string str1, string str2)     ;
/*function.link.html*/
      int  link   (string target, string link)     ;
/*function.linkinfo.html*/
      int  linkinfo   (string path)     ;
/*function.list.html*/
//DEBUG      void  list  (...);     ;
/*function.log.html*/
      float  log   (float arg)     ;
/*function.log10.html*/
      float  log10   (float arg)     ;
/*function.long2ip.html*/
      string  long2ip   (int proper_address)     ;
/*function.lstat.html*/
      array  lstat   (string filename)     ;
/*function.ltrim.html*/
      string  ltrim   (string str)     ;
/*function.mail.html*/
      bool  mail   (string to, string subject, string message /*, string additional_headers*/)     ;
      bool  mail   (string to, string subject, string message , string additional_headers)     ;
/*function.max.html*/
      int  max   (int arg1,...)     ;
      double  max   (double arg1, ...)     ;
/*function.mcal-append-event.html*/
      int  mcal_append_event   (int mcal_stream)     ;
/*function.mcal-close.html*/
      int  mcal_close   (int mcal_stream, int flags)     ;
/*function.mcal-date-compare.html*/
      int  mcal_date_compare   (int a_year, int a_month, int a_day, int b_year, int b_month, int b_day)     ;
/*function.mcal-date-valid.html*/
      int  mcal_date_valid   (int year, int month, int day)     ;
/*function.mcal-day-of-week.html*/
      int  mcal_   (int year, int month, int day)     ;
/*function.mcal-day-of-year.html*/
      int  mcal_   (int year, int month, int day)     ;
/*function.mcal-days-in-month.html*/
      int  mcal_days_in_month   (int month, int leap_year)     ;
/*function.mcal-delete-event.html*/
      int  mcal_delete_event   (int uid)     ;
/*function.mcal-event-add-attribute.html*/
      void          mcal_event_add_attribute          (int stream, string attribute, string value)     ;
/*function.mcal-event-init.html*/
      int  mcal_event_init   (int stream)     ;
/*function.mcal-event-set-alarm.html*/
      int  mcal_event_set_alarm   (int stream, int alarm)     ;
/*function.mcal-event-set-category.html*/
      int  mcal_event_set_category   (int stream, string category)     ;
/*function.mcal-event-set-class.html*/
      int  mcal_event_set_class   (int stream, int classtype)     ;
/*function.mcal-event-set-description.html*/
      int          mcal_event_set_description          (int stream, string description)     ;
/*function.mcal-event-set-end.html*/
      int  mcal_event_set_end   (int stream, int year, int month /*, int         day*//*, int         hour*//*, int         min*//*, int         sec*/)     ;
      int  mcal_event_set_end   (int stream, int year, int month , int         day/*, int         hour*//*, int         min*//*, int         sec*/)     ;
      int  mcal_event_set_end   (int stream, int year, int month , int         day, int         hour/*, int         min*//*, int         sec*/)     ;
      int  mcal_event_set_end   (int stream, int year, int month , int         day, int         hour, int         min/*, int         sec*/)     ;
      int  mcal_event_set_end   (int stream, int year, int month , int         day, int         hour, int         min, int         sec)     ;
/*function.mcal-event-set-recur-daily.html*/
      int          mcal_event_set_recur_daily          (int stream, int year, int month, int day, int interval)     ;
/*function.mcal-event-set-recur-monthly-mday.html*/
      int          mcal_event_set_recur_monthly_mday          (int stream, int year, int month, int day, int interval)     ;
/*function.mcal-event-set-recur-monthly-wday.html*/
      int          mcal_event_set_recur_monthly_wday          (int stream, int year, int month, int day, int interval)     ;
/*function.mcal-event-set-recur-none.html*/
      int          mcal_event_set_recur_none          (int stream)     ;
/*function.mcal-event-set-recur-weekly.html*/
      int          mcal_event_set_recur_weekly          (int stream, int year, int month, int day, int interval, int weekdays)     ;
/*function.mcal-event-set-recur-yearly.html*/
      int          mcal_event_set_recur_yearly          (int stream, int year, int month, int day, int interval)     ;
/*function.mcal-event-set-start.html*/
      int  mcal_event_set_start   (int stream, int year, int month /*, int         day*//*, int         hour*//*, int         min*//*, int         sec*/)     ;
      int  mcal_event_set_start   (int stream, int year, int month , int         day/*, int         hour*//*, int         min*//*, int         sec*/)     ;
      int  mcal_event_set_start   (int stream, int year, int month , int         day, int         hour/*, int         min*//*, int         sec*/)     ;
      int  mcal_event_set_start   (int stream, int year, int month , int         day, int         hour, int         min/*, int         sec*/)     ;
      int  mcal_event_set_start   (int stream, int year, int month , int         day, int         hour, int         min, int         sec)     ;
/*function.mcal-event-set-title.html*/
      int  mcal_event_set_title   (int stream, string title)     ;
/*function.mcal-fetch-current-stream-event.html*/
      int          mcal_fetch_current_stream_event          (int stream)     ;
/*function.mcal-fetch-event.html*/
      object  mcal_fetch_event   (int mcal_stream, int event_id /*, int options*/)     ;
      object  mcal_fetch_event   (int mcal_stream, int event_id , int options)     ;
/*function.mcal-is-leap-year.html*/
      int  mcal_is_leap_year   (int year)     ;
/*function.mcal-list-alarms.html*/
      array  mcal_list_events   (int mcal_stream /*, int         begin_year*//*, int         begin_month*//*, int         begin_day*//*, int         end_year*//*, int         end_month*//*, int         end_day*/)     ;
      array  mcal_list_events   (int mcal_stream , int         begin_year/*, int         begin_month*//*, int         begin_day*//*, int         end_year*//*, int         end_month*//*, int         end_day*/)     ;
      array  mcal_list_events   (int mcal_stream , int         begin_year, int         begin_month/*, int         begin_day*//*, int         end_year*//*, int         end_month*//*, int         end_day*/)     ;
      array  mcal_list_events   (int mcal_stream , int         begin_year, int         begin_month, int         begin_day/*, int         end_year*//*, int         end_month*//*, int         end_day*/)     ;
      array  mcal_list_events   (int mcal_stream , int         begin_year, int         begin_month, int         begin_day, int         end_year/*, int         end_month*//*, int         end_day*/)     ;
      array  mcal_list_events   (int mcal_stream , int         begin_year, int         begin_month, int         begin_day, int         end_year, int         end_month/*, int         end_day*/)     ;
      array  mcal_list_events   (int mcal_stream , int         begin_year, int         begin_month, int         begin_day, int         end_year, int         end_month, int         end_day)     ;
/*function.mcal-list-events.html*/
      array  mcal_list_events   (int mcal_stream/*, int         begin_year*//*, int         begin_month*//*, int         begin_day*//*, int         end_year*//*, int         end_month*//*, int         end_day*/)     ;
      array  mcal_list_events   (int mcal_stream, int         begin_year/*, int         begin_month*//*, int         begin_day*//*, int         end_year*//*, int         end_month*//*, int         end_day*/)     ;
      array  mcal_list_events   (int mcal_stream, int         begin_year, int         begin_month/*, int         begin_day*//*, int         end_year*//*, int         end_month*//*, int         end_day*/)     ;
      array  mcal_list_events   (int mcal_stream, int         begin_year, int         begin_month, int         begin_day/*, int         end_year*//*, int         end_month*//*, int         end_day*/)     ;
      array  mcal_list_events   (int mcal_stream, int         begin_year, int         begin_month, int         begin_day, int         end_year/*, int         end_month*//*, int         end_day*/)     ;
      array  mcal_list_events   (int mcal_stream, int         begin_year, int         begin_month, int         begin_day, int         end_year, int         end_month/*, int         end_day*/)     ;
      array  mcal_list_events   (int mcal_stream, int         begin_year, int         begin_month, int         begin_day, int         end_year, int         end_month, int         end_day)     ;
/*function.mcal-next-recurrence.html*/
      int  mcal_next_recurrence   (int stream, int weekstart, array next)     ;
/*function.mcal-open.html*/
      int  mcal_open   (string calendar, string username, string password, string options)     ;
/*function.mcal-snooze.html*/
      int  mcal_snooze   (int uid)     ;
/*function.mcal-store-event.html*/
      int  mcal_store_event   (int mcal_stream)     ;
/*function.mcal-time-valid.html*/
      int  mcal_time_valid   (int hour, int minutes, int seconds)     ;
/*function.mcrypt-cbc.html*/
      string  mcrypt_cbc   (string cipher, string key, string data, int mode /*, string         iv*/)     ;
      string  mcrypt_cbc   (string cipher, string key, string data, int mode , string         iv)     ;
/*function.mcrypt-cfb.html*/
      string  mcrypt_cfb   (int cipher, string key, string data, int mode, string iv)           ;
/*function.mcrypt-create-iv.html*/
      string        mcrypt_create_iv   (int size, int source)     ;
/*function.mcrypt-decrypt.html*/
      string  mcrypt_decrypt   (string cipher, string key, string data, string mode /*, string         iv*/)     ;
      string  mcrypt_decrypt   (string cipher, string key, string data, string mode , string         iv)     ;
/*function.mcrypt-ecb.html*/
      string  mcrypt_ecb   (int cipher, string key, string data, int mode)                ;
/*function.mcrypt-enc-get-algorithms-name.html*/
      string  mcrypt_enc_get_algorithms_name   (resource td)     ;
/*function.mcrypt-enc-get-block-size.html*/
      int  mcrypt_enc_get_block_size   (resource td)     ;
/*function.mcrypt-enc-get-iv-size.html*/
      int  mcrypt_enc_get_iv_size   (resource td)     ;
/*function.mcrypt-enc-get-key-size.html*/
      int  mcrypt_enc_get_key_size   (resource td)     ;
/*function.mcrypt-enc-get-modes-name.html*/
      string  mcrypt_enc_get_modes_name   (resource td)     ;
/*function.mcrypt-enc-get-supported-key-sizes.html*/
      array  mcrypt_enc_get_supported_key_sizes   (resource td)     ;
/*function.mcrypt-enc-is-block-algorithm-mode.html*/
      int  mcrypt_enc_is_block_algorithm_mode   (resource td)     ;
/*function.mcrypt-enc-is-block-algorithm.html*/
      int  mcrypt_enc_is_block_algorithm   (resource td)     ;
/*function.mcrypt-enc-is-block-mode.html*/
      int  mcrypt_enc_is_block_mode   (resource td)     ;
/*function.mcrypt-enc-self-test.html*/
      int  mcrypt_enc_self_test   (resource td)     ;
/*function.mcrypt-encrypt.html*/
      string  mcrypt_encrypt   (string cipher, string key, string data, string mode /*, string         iv*/)     ;
      string  mcrypt_encrypt   (string cipher, string key, string data, string mode , string         iv)     ;
/*function.mcrypt-generic-end.html*/
      bool  mcrypt_generic_end   (resource td)     ;
/*function.mcrypt-generic-init.html*/
      int  mcrypt_generic_init   (resource td, string key, string iv)     ;
/*function.mcrypt-generic.html*/
      string  mcrypt_generic   (resource td, string data)     ;
/*function.mcrypt-get-block-size.html*/
      int  mcrypt_get_block_size   (int cipher)     ;
/*function.mcrypt-get-cipher-name.html*/
      string  mcrypt_get_cipher_name   (int cipher);
/*function.mcrypt-get-iv-size.html*/
      int  mcrypt_get_iv_size   (string cipher, string mode)     ;
/*function.mcrypt-get-key-size.html*/
      int  mcrypt_get_key_size   (int cipher)     ;
/*function.mcrypt-list-algorithms.html*/
      array  mcrypt_list_algorithms   (/*string 	   lib_dir*/)     ;
      array  mcrypt_list_algorithms   (string 	   lib_dir)     ;
/*function.mcrypt-list-modes.html*/
      array  mcrypt_list_modes   (/*string 	   lib_dir*/)     ;
      array  mcrypt_list_modes   (string 	   lib_dir)     ;
/*function.mcrypt-module-get-algo-block-size.html*/
      int  mcrypt_module_get_algo_block_size   (string algorithm /*, string lib_dir*/)     ;
      int  mcrypt_module_get_algo_block_size   (string algorithm , string lib_dir)     ;
/*function.mcrypt-module-get-algo-key-size.html*/
      int  mcrypt_module_get_algo_key_size   (string algorithm /*, string lib_dir*/)     ;
      int  mcrypt_module_get_algo_key_size   (string algorithm , string lib_dir)     ;
/*function.mcrypt-module-get-algo-supported-key-sizes.html*/
      array  mcrypt_module_enc_get_algo_supported_key_sizes   (string algorithm /*, string lib_dir*/)     ;
      array  mcrypt_module_enc_get_algo_supported_key_sizes   (string algorithm , string lib_dir)     ;
/*function.mcrypt-module-is-block-algorithm-mode.html*/
      bool  mcrypt_module_is_block_algorithm_mode   (string mode /*, string lib_dir*/)     ;
      bool  mcrypt_module_is_block_algorithm_mode   (string mode , string lib_dir)     ;
/*function.mcrypt-module-is-block-algorithm.html*/
      bool  mcrypt_module_is_block_algorithm   (string algorithm /*, string lib_dir*/)     ;
      bool  mcrypt_module_is_block_algorithm   (string algorithm , string lib_dir)     ;
/*function.mcrypt-module-is-block-mode.html*/
      bool  mcrypt_module_is_block_mode   (string mode /*, string lib_dir*/)     ;
      bool  mcrypt_module_is_block_mode   (string mode , string lib_dir)     ;
/*function.mcrypt-module-open.html*/
      resource  mcrypt_module_open   (string algorithm, string algorithm_directory, string mode, string mode_directory)     ;
/*function.mcrypt-module-self-test.html*/
      bool  mcrypt_module_self_test   (string algorithm /*, string lib_dir*/)     ;
      bool  mcrypt_module_self_test   (string algorithm , string lib_dir)     ;
/*function.mcrypt-ofb.html*/
      string  mcrypt_ofb   (int cipher, string key, string data, int mode, string iv);
/*function.md5.html*/
      string  md5   (string str)     ;
/*function.mdecrypt-generic.html*/
      string  mdecrypt_generic   (resource td, string data)     ;
/*function.metaphone.html*/
      string  metaphone   (string str)     ;
/*function.method-exists.html*/
      bool  method_exists   (object object, string method_name)     ;
/*function.mhash-count.html*/
      int  mhash_count   (void)     ;
/*function.mhash-get-block-size.html*/
      int  mhash_get_block_size   (int hash)     ;
/*function.mhash-get-hash-name.html*/
      string  mhash_get_hash_name   (int hash)     ;
/*function.mhash.html*/
      string  mhash   (int hash, string data)     ;
/*function.microtime.html*/
      string  microtime  (void);     ;
/*function.min.html*/
      int  min   (int arg1, ...)     ;
      double  min   (double arg1, ...)     ;
/*function.mkdir.html*/
      int  mkdir   (string pathname, int mode)     ;
/*function.mktime.html*/
      int  mktime   (int hour, int minute, int second, int month, int day, int year /*, int         is_dst*/)     ;
      int  mktime   (int hour, int minute, int second, int month, int day, int year , int         is_dst)     ;
/*function.msql-affected-rows.html*/
      int  msql_affected_rows   (int query_identifier)     ;
/*function.msql-close.html*/
      int  msql_close   (int link_identifier)     ;
/*function.msql-connect.html*/
      int  msql_connect   (string hostname)     ;
/*function.msql-create-db.html*/
      int  msql_create_db   (string database_name /*, int         link_identifier*/)     ;
      int  msql_create_db   (string database_name , int         link_identifier)     ;
/*function.msql-createdb.html*/
      int  msql_createdb   (string database_name /*, int         link_identifier*/)     ;
      int  msql_createdb   (string database_name , int         link_identifier)     ;
/*function.msql-data-seek.html*/
      int  msql_data_seek   (int query_identifier, int row_number)     ;
/*function.msql-dbname.html*/
      string  msql_dbname   (int query_identifier, int i)     ;
/*function.msql-drop-db.html*/
      int  msql_drop_db   (string database_name, int link_identifier)     ;
/*function.msql-dropdb.html*/
;
/*function.msql-error.html*/
      string  msql_error   ()     ;
/*function.msql-fetch-array.html*/
      int  msql_fetch_array   (int query_identifier /*, int         result_type*/)     ;
      int  msql_fetch_array   (int query_identifier , int         result_type)     ;
/*function.msql-fetch-field.html*/
      object  msql_fetch_field   (int query_identifier, int field_offset)     ;
/*function.msql-fetch-object.html*/
      int  msql_fetch_object   (int query_identifier /*, int        result_type*/)     ;
      int  msql_fetch_object   (int query_identifier , int        result_type)     ;
/*function.msql-fetch-row.html*/
      array  msql_fetch_row   (int query_identifier)     ;
/*function.msql-field-seek.html*/
      int  msql_field_seek   (int query_identifier, int field_offset)     ;
/*function.msql-fieldflags.html*/
      string  msql_fieldflags   (int query_identifier, int i)     ;
/*function.msql-fieldlen.html*/
      int  msql_fieldlen   (int query_identifier, int i)     ;
/*function.msql-fieldname.html*/
      string  msql_fieldname   (int query_identifier, int field)     ;
/*function.msql-fieldtable.html*/
      int  msql_fieldtable   (int query_identifier, int field)     ;
/*function.msql-fieldtype.html*/
      string  msql_fieldtype   (int query_identifier, int i)     ;
/*function.msql-free-result.html*/
      int  msql_free_result   (int query_identifier)     ;
/*function.msql-freeresult.html*/
;
/*function.msql-list-dbs.html*/
      int  msql_list_dbs  (void);     ;
/*function.msql-list-fields.html*/
      int  msql_list_fields   (string database, string tablename)     ;
/*function.msql-list-tables.html*/
      int  msql_list_tables   (string database)     ;
/*function.msql-listdbs.html*/
;
/*function.msql-listfields.html*/
;
/*function.msql-listtables.html*/
;
/*function.msql-num-fields.html*/
      int  msql_num_fields   (int query_identifier)     ;
/*function.msql-num-rows.html*/
      int  msql_num_rows   (int query_identifier)     ;
/*function.msql-numfields.html*/
      int  msql_numfields   (int query_identifier)     ;
/*function.msql-numrows.html*/
      int  msql_numrows  (void);     ;
/*function.msql-pconnect.html*/
      int  msql_pconnect   (string hostname)     ;
/*function.msql-query.html*/
      int  msql_query   (string query, int link_identifier)     ;
/*function.msql-regcase.html*/
;
/*function.msql-result.html*/
      int  msql_result   (int query_identifier, int i, mixed field)     ;
/*function.msql-select-db.html*/
      int  msql_select_db   (string database_name, int link_identifier)     ;
/*function.msql-selectdb.html*/
;
/*function.msql-tablename.html*/
      string  msql_tablename   (int query_identifier, int field)     ;
/*function.msql.html*/
      int  msql   (string database, string query, int link_identifier)     ;
/*function.mssql-affected-rows.html*/
;
/*function.mssql-close.html*/
      int  mssql_close   (/*int         link_identifier*/)     ;
      int  mssql_close   (int         link_identifier)     ;
/*function.mssql-connect.html*/
      int  mssql_connect   (/*string         servername *//*, string         username*//*, string         password*/)     ;
      int  mssql_connect   (string         servername /*, string         username*//*, string         password*/)     ;
      int  mssql_connect   (string         servername , string         username/*, string         password*/)     ;
      int  mssql_connect   (string         servername , string         username, string         password)     ;
/*function.mssql-data-seek.html*/
      int  mssql_data_seek   (int result_identifier, int row_number)     ;
/*function.mssql-fetch-array.html*/
      int  mssql_fetch_array   (int result)     ;
/*function.mssql-fetch-field.html*/
      object  mssql_fetch_field   (int result /*, int         field_offset*/)     ;
      object  mssql_fetch_field   (int result , int         field_offset)     ;
/*function.mssql-fetch-object.html*/
      int  mssql_fetch_object   (int result)     ;
/*function.mssql-fetch-row.html*/
      array  mssql_fetch_row   (int result)     ;
/*function.mssql-field-length.html*/
      int  mssql_field_length   (int result /*, int         offset*/)     ;
      int  mssql_field_length   (int result , int         offset)     ;
/*function.mssql-field-name.html*/
      int  mssql_field_name   (int result /*, int         offset*/)     ;
      int  mssql_field_name   (int result , int         offset)     ;
/*function.mssql-field-seek.html*/
      int  mssql_field_seek   (int result, int field_offset)     ;
/*function.mssql-field-type.html*/
      string  mssql_field_type   (int result /*, int         offset*/)     ;
      string  mssql_field_type   (int result , int         offset)     ;
/*function.mssql-free-result.html*/
      int  mssql_free_result   (int result)     ;
/*function.mssql-get-last-message.html*/
      string          mssql_get_last_message          (void )     ;
/*function.mssql-min-error-severity.html*/
      void          mssql_min_error_severity          (int severity)     ;
/*function.mssql-min-message-severity.html*/
      void          mssql_min_message_severity          (int severity)     ;
/*function.mssql-num-fields.html*/
      int  mssql_num_fields   (int result)     ;
/*function.mssql-num-rows.html*/
      int  mssql_num_rows   (string result)     ;
/*function.mssql-pconnect.html*/
      int  mssql_pconnect   (/*string         servername *//*, string         username*//*, string         password*/)     ;
      int  mssql_pconnect   (string         servername /*, string         username*//*, string         password*/)     ;
      int  mssql_pconnect   (string         servername , string         username/*, string         password*/)     ;
      int  mssql_pconnect   (string         servername , string         username, string         password)     ;
/*function.mssql-query.html*/
      int  mssql_query   (string query /*, int         link_identifier*/)     ;
      int  mssql_query   (string query , int         link_identifier)     ;
/*function.mssql-result.html*/
      int  mssql_result   (int result, int i, mixed field)     ;
/*function.mssql-select-db.html*/
      int  mssql_select_db   (string database_name /*, int         link_identifier*/)     ;
      int  mssql_select_db   (string database_name , int         link_identifier)     ;
/*function.mt-getrandmax.html*/
      int  mt_getrandmax   (void)     ;
/*function.mt-rand.html*/
      int  mt_rand   (/*int        min*/ /*, int        max*/)     ;
      int  mt_rand   (int        min /*, int        max*/)     ;
      int  mt_rand   (int        min , int        max)     ;
/*function.mt-srand.html*/
      void  mt_srand   (int seed)     ;
/*function.mysql-affected-rows.html*/
      int  mysql_affected_rows   (/*int         link_identifier*/)     ;
      int  mysql_affected_rows   (int         link_identifier)     ;
      int  mysql_affected_rows   (int         link_identifier)     ;
/*function.mysql-change-user.html*/
      int  mysql_change_user   (string user, string password /*, string         database*//*, int         link_identifier*/)     ;
      int  mysql_change_user   (string user, string password , string         database/*, int         link_identifier*/)     ;
      int  mysql_change_user   (string user, string password , string         database, int         link_identifier)     ;
/*function.mysql-close.html*/
      int  mysql_close   (/*int         link_identifier*/)     ;
      int  mysql_close   (int         link_identifier)     ;
/*function.mysql-connect.html*/
      int  mysql_connect   (/*string         hostname  *//*:port*/  	/*:/path/to/socket*//*, string         username*//*, string         password*/)     ;
      int  mysql_connect   (string         hostname  /*:port:/path/to/socket*//*, string         username*//*, string         password*/)     ;
      int  mysql_connect   (string         hostname  /*:port:/path/to/socket*/, string         username/*, string         password*/)     ;
      int  mysql_connect   (string         hostname  /*:port:/path/to/socket*/, string         username, string         password)     ;
/*function.mysql-create-db.html*/
      int  mysql_create_db   (string database_name /*, int         link_identifier*/)     ;
      int  mysql_create_db   (string database_name , int         link_identifier)     ;
/*function.mysql-data-seek.html*/
      int  mysql_data_seek   (int result_identifier, int row_number)     ;
/*function.mysql-db-query.html*/
      int  mysql_db_query   (string database, string query /*, int         link_identifier*/)     ;
      int  mysql_db_query   (string database, string query , int         link_identifier)     ;
      int  mysql_db_query   (string database, string query , int         link_identifier)     ;
/*function.mysql-drop-db.html*/
      int  mysql_drop_db   (string database_name /*, int         link_identifier*/)     ;
      int  mysql_drop_db   (string database_name , int         link_identifier)     ;
/*function.mysql-errno.html*/
      int  mysql_errno   (/*int         link_identifier*/)     ;
      int  mysql_errno   (int         link_identifier)     ;
      int  mysql_errno   (int         link_identifier)     ;
/*function.mysql-error.html*/
      string  mysql_error   (/*int         link_identifier*/)     ;
      string  mysql_error   (int         link_identifier)     ;
      string  mysql_error   (int         link_identifier)     ;
/*function.mysql-fetch-array.html*/
      string_array  mysql_fetch_array   (int result /*, int        result_type*/)     ;
      string_array  mysql_fetch_array   (int result , int        result_type)     ;
/*function.mysql-fetch-field.html*/
      class object_mysql_fetch_field {
      public:
	  string _s_table,_s_name;
	  int _s_max_length;
	  int _s_not_null;
	  int _s_primary_key;
	  int _s_unique_key;
	  int _s_multiple_key;
	  int _s_numeric;
	  int _s_blob;
	  string _s_type;
	  int _s_unsigned;
	  int _s_zerofill;
	  int operator!();
      } mysql_fetch_field   (int result /*, int         field_offset*/),
	  mysql_fetch_field   (int result ,int field_offset)
	  ;
/*function.mysql-fetch-lengths.html*/
      array  mysql_fetch_lengths   (int result)     ;
/*function.mysql-fetch-object.html*/
      object  mysql_fetch_object   (int result /*, int        result_typ*/)     ;
      object  mysql_fetch_object   (int result , int        result_typ)     ;
/*function.mysql-fetch-row.html*/
      string_array  mysql_fetch_row   (int result)     ;
/*function.mysql-field-flags.html*/
      string  mysql_field_flags   (int result, int field_offset)     ;
/*function.mysql-field-len.html*/
      int  mysql_field_len   (int result, int field_offset)     ;
/*function.mysql-field-name.html*/
      string  mysql_field_name   (int result, int field_index)     ;
/*function.mysql-field-seek.html*/
      int  mysql_field_seek   (int result, int field_offset)     ;
/*function.mysql-field-table.html*/
      string  mysql_field_table   (int result, int field_offset)     ;
/*function.mysql-field-type.html*/
      string  mysql_field_type   (int result, int field_offset)     ;
/*function.mysql-free-result.html*/
      int  mysql_free_result   (int result)     ;
/*function.mysql-insert-id.html*/
      int  mysql_insert_id   (/*int         link_identifier*/)     ;
      int  mysql_insert_id   (int         link_identifier)     ;
/*function.mysql-list-dbs.html*/
      int  mysql_list_dbs   (/*int         link_identifier*/)     ;
      int  mysql_list_dbs   (int         link_identifier)     ;
/*function.mysql-list-fields.html*/
      int  mysql_list_fields   (string database_name, string table_name /*, int         link_identifier*/)     ;
      int  mysql_list_fields   (string database_name, string table_name , int         link_identifier)     ;
/*function.mysql-list-tables.html*/
      int  mysql_list_tables   (string database /*, int         link_identifier*/)     ;
      int  mysql_list_tables   (string database , int         link_identifier)     ;
/*function.mysql-num-fields.html*/
      int  mysql_num_fields   (int result)     ;
/*function.mysql-num-rows.html*/
      int  mysql_num_rows   (int result)     ;
      int  mysql_numrows   (int result)     ; /* Downward compatibility */

/*function.mysql-pconnect.html*/
      int  mysql_pconnect   (/*string         hostname  	*//*:port*/    	/*:/path/to/socket*/ /*, string         username*//*, string         password*/)     ;
      int  mysql_pconnect   (string         hostname  	/*:port*/    	/*:/path/to/socket*/ /*, string         username*//*, string         password*/)     ;
      int  mysql_pconnect   (string         hostname  	/*:port*/    	/*:/path/to/socket*/ , string         username/*, string         password*/)     ;
      int  mysql_pconnect   (string         hostname  	/*:port*/    	/*:/path/to/socket*/ , string         username, string         password)     ;
/*function.mysql-query.html*/
      int  mysql_query   (string query /*, int         link_identifier*/)     ;
      int  mysql_query   (string query , int         link_identifier)     ;
      int  mysql_query   (string query , int         link_identifier)     ;
/*function.mysql-result.html*/
      int  mysql_result   (int result, int row /*, mixed         field*/)     ;
      int  mysql_result   (int result, int row , mixed         field)     ;
      int  mysql_result   (int result, int row , const char *)     ;
/*function.mysql-select-db.html*/
      int  mysql_select_db   (string database_name /*, int         link_identifier*/)     ;
      int  mysql_select_db   (string database_name , int         link_identifier)     ;
      int  mysql_select_db   (string database_name , int         link_identifier)     ;
/*function.mysql-tablename.html*/
      string  mysql_tablename   (int result, int i)     ;
/*function.next.html*/
      mixed  next   (array array)     ;
/*function.nl2br.html*/
      string  nl2br   (string string)     ;
/*function.number-format.html*/
      string  number_format   (float number, int decimals, string dec_point, string thousands_sep)     ;
/*function.ob-end-clean.html*/
      void  ob_end_clean  (void);     ;
/*function.ob-end-flush.html*/
      void  ob_end_flush  (void);     ;
/*function.ob-get-contents.html*/
      string  ob_get_contents  (void);     ;	
/*function.ob-implicit-flush.html*/
      void  ob_implicit_flush   (/*int         flag*/)     ;
      void  ob_implicit_flush   (int         flag)     ;
/*function.ob-start.html*/
      void  ob_start  (void);     ;
/*function.ocibindbyname.html*/
      int  OCIBindByName   (int stmt, string ph_name, mixed &variable, int length /*, int type*/)     ;
      int  OCIBindByName   (int stmt, string ph_name, mixed &variable, int length , int type)     ;
/*function.ocicolumnisnull.html*/
      int  OCIColumnIsNULL   (int stmt, mixed column)     ;
/*function.ocicolumnname.html*/
      string  OCIColumnName   (int stmt, int col)     ;
/*function.ocicolumnsize.html*/
      int  OCIColumnSize   (int stmt, mixed column)     ;
/*function.ocicolumntype.html*/
      mixed  OCIColumnType   (int stmt, int col)     ;
/*function.ocicommit.html*/
      int  OCICommit   (int connection)     ;
/*function.ocidefinebyname.html*/
      int  OCIDefineByName   (int stmt, string Column_Name, mixed &variable /*, int type*/)     ;
      int  OCIDefineByName   (int stmt, string Column_Name, mixed &variable , int type)     ;
/*function.ocierror.html*/
      array  OCIError   (/*int         stmt|conn|global*/)     ;
      array  OCIError   (int         stmt_or_conn_or_global)     ;
/*function.ociexecute.html*/
      int  OCIExecute   (int statement /*, int mode*/)     ;
      int  OCIExecute   (int statement , int mode)     ;
/*function.ocifetch.html*/
      int  OCIFetch   (int statement)     ;
/*function.ocifetchinto.html*/
      int  OCIFetchInto   (int stmt, array &result /*, int mode*/)     ;
      int  OCIFetchInto   (int stmt, array &result , int mode)     ;
/*function.ocifetchstatement.html*/
      int  OCIFetchStatement   (int stmt, array &variable)     ;
/*function.ocifreecursor.html*/
      int  OCIFreeCursor   (int stmt)     ;
/*function.ocifreestatement.html*/
      int  OCIFreeStatement   (int stmt)     ;
/*function.ociinternaldebug.html*/
      void  OCIInternalDebug   (int onoff)     ;
/*function.ocilogoff.html*/
      int  OCILogOff   (int connection)     ;
/*function.ocilogon.html*/
      int  OCILogon   (string username, string password /*, string db*/)     ;
      int  OCILogon   (string username, string password , string db)     ;
/*function.ocinewcursor.html*/
      int  OCINewCursor   (int conn)     ;
/*function.ocinewdescriptor.html*/
      string  OCINewDescriptor   (int connection /*, int type*/)     ;
      string  OCINewDescriptor   (int connection , int type)     ;
/*function.ocinlogon.html*/
      int  OCINLogon   (string username, string password /*, string db*/)     ;
      int  OCINLogon   (string username, string password , string db)     ;
/*function.ocinumcols.html*/
      int  OCINumCols   (int stmt)     ;
/*function.ocinumrows.html*/
;
/*function.ociparse.html*/
      int  OCIParse   (int conn, string query)     ;
/*function.ociplogon.html*/
      int  OCIPLogon   (string username, string password /*, string db*/)     ;
      int  OCIPLogon   (string username, string password , string db)     ;
/*function.ociresult.html*/
      mixed  OCIResult   (int statement, mixed column)     ;
/*function.ocirollback.html*/
      int  OCIRollback   (int connection)     ;
/*function.ocirowcount.html*/
      int  OCIRowCount   (int statement)     ;
/*function.ociserverversion.html*/
      string  OCIServerVersion   (int conn)     ;
/*function.ocistatementtype.html*/
      string  OCIStatementType   (int stmt)     ;
/*function.octdec.html*/
      int  octdec   (string octal_string)     ;
/*function.odbc-autocommit.html*/
      int  odbc_autocommit   (int connection_id /*, int OnOff*/)     ;
      int  odbc_autocommit   (int connection_id , int OnOff)     ;
/*function.odbc-binmode.html*/
      int  odbc_binmode   (int result_id, int mode)     ;
/*function.odbc-close-all.html*/
      void  odbc_close_all  (void);     ;
/*function.odbc-close.html*/
      void  odbc_close   (int connection_id)     ;
/*function.odbc-columnprivileges.html*/
      int  odbc_columnprivileges   (int connection_id /*, string qualifier*//*, string owner*//*, string table_name*//*, string column_name*/)     ;
      int  odbc_columnprivileges   (int connection_id , string qualifier/*, string owner*//*, string table_name*//*, string column_name*/)     ;
      int  odbc_columnprivileges   (int connection_id , string qualifier, string owner/*, string table_name*//*, string column_name*/)     ;
      int  odbc_columnprivileges   (int connection_id , string qualifier, string owner, string table_name/*, string column_name*/)     ;
      int  odbc_columnprivileges   (int connection_id , string qualifier, string owner, string table_name, string column_name)     ;
/*function.odbc-columns.html*/
      int  odbc_columns   (int connection_id/*, string qualifier*//*, string owner*//*, string table_name*//*, string column_name*/)     ;
      int  odbc_columns   (int connection_id, string qualifier/*, string owner*//*, string table_name*//*, string column_name*/)     ;
      int  odbc_columns   (int connection_id, string qualifier, string owner/*, string table_name*//*, string column_name*/)     ;
      int  odbc_columns   (int connection_id, string qualifier, string owner, string table_name/*, string column_name*/)     ;
      int  odbc_columns   (int connection_id, string qualifier, string owner, string table_name, string column_name)     ;
/*function.odbc-commit.html*/
      int  odbc_commit   (int connection_id)     ;
/*function.odbc-connect.html*/
      int  odbc_connect   (string dsn, string user, string password /*, int cursor_type*/)     ;
      int  odbc_connect   (string dsn, string user, string password , int cursor_type)     ;
/*function.odbc-cursor.html*/
      string  odbc_cursor   (int result_id)     ;
/*function.odbc-do.html*/
      int  odbc_do   (int conn_id, string query)     ;
/*function.odbc-exec.html*/
      int  odbc_exec   (int connection_id, string query_string)     ;
/*function.odbc-execute.html*/
      int  odbc_execute   (int result_id /*, array        parameters_array*/)     ;
      int  odbc_execute   (int result_id , array        parameters_array)     ;
/*function.odbc-fetch-into.html*/
      int  odbc_fetch_into   (int result_id /*, int rownumber, array result_array*/)     ;
      int  odbc_fetch_into   (int result_id , int rownumber, array result_array)     ;
/*function.odbc-fetch-row.html*/
      int  odbc_fetch_row   (int result_id /*, int row_number*/)     ;
      int  odbc_fetch_row   (int result_id , int row_number)     ;
/*function.odbc-field-len.html*/
      int  odbc_field_len   (int result_id, int field_number)     ;
/*function.odbc-field-name.html*/
      string  odbc_field_name   (int result_id, int field_number)     ;
/*function.odbc-field-num.html*/
      int  odbc_field_num   (int result_id, string field_name)     ;
/*function.odbc-field-precision.html*/
      string  odbc_field_precision   (int result_id, int field_number)     ;
/*function.odbc-field_scale.html*/
      string  odbc_field_scale   (int result_id, int field_number)     ;
/*function.odbc-field-type.html*/
      string  odbc_field_type   (int result_id, int field_number)     ;
/*function.odbc-foreignkeys.html*/
      int  odbc_foreignkeys   (int connection_id, string pk_qualifier, string pk_owner, string pk_table, string fk_qualifier, string fk_owner, string fk_table)     ;
/*function.odbc-free-result.html*/
      int  odbc_free_result   (int result_id)     ;
/*function.odbc-gettypeinfo.html*/
      int  odbc_gettypeinfo   (int connection_id /*, int data_type*/)     ;
      int  odbc_gettypeinfo   (int connection_id , int data_type)     ;
/*function.odbc-longreadlen.html*/
      int  odbc_longreadlen   (int result_id, int length)     ;
/*function.odbc-num-fields.html*/
      int  odbc_num_fields   (int result_id)     ;
/*function.odbc-num-rows.html*/
      int  odbc_num_rows   (int result_id)     ;
/*function.odbc-pconnect.html*/
      int  odbc_pconnect   (string dsn, string user, string password /*, int cursor_type*/)     ;
      int  odbc_pconnect   (string dsn, string user, string password , int cursor_type)     ;
/*function.odbc-prepare.html*/
      int  odbc_prepare   (int connection_id, string query_string)     ;
/*function.odbc-primarykeys.html*/
      int  odbc_primarykeys   (int connection_id, string qualifier, string owner, string table)     ;
/*function.odbc-procedurecolumns.html*/
      int  odbc_procedurecolumns   (int connection_id /*, string qualifier*//*, string owner*//*, string proc*//*, string column*/)     ;
      int  odbc_procedurecolumns   (int connection_id , string qualifier/*, string owner*//*, string proc*//*, string column*/)     ;
      int  odbc_procedurecolumns   (int connection_id , string qualifier, string owner/*, string proc*//*, string column*/)     ;
      int  odbc_procedurecolumns   (int connection_id , string qualifier, string owner, string proc/*, string column*/)     ;
      int  odbc_procedurecolumns   (int connection_id , string qualifier, string owner, string proc, string column)     ;
/*function.odbc-procedures.html*/
      int  odbc_procedures   (int connection_id /*, string qualifier*//*, string owner*//*, string name*/)     ;
      int  odbc_procedures   (int connection_id , string qualifier/*, string owner*//*, string name*/)     ;
      int  odbc_procedures   (int connection_id , string qualifier, string owner/*, string name*/)     ;
      int  odbc_procedures   (int connection_id , string qualifier, string owner, string name)     ;
/*function.odbc-result-all.html*/
      int  odbc_result_all   (int result_id /*, string format*/)     ;
      int  odbc_result_all   (int result_id , string format)     ;
/*function.odbc-result.html*/
      string  odbc_result   (int result_id, mixed field)     ;
/*function.odbc-rollback.html*/
      int  odbc_rollback   (int connection_id)     ;
/*function.odbc-setoption.html*/
      int  odbc_setoption   (int id, int function, int option, int param)     ;
/*function.odbc-specialcolumns.html*/
      int  odbc_specialcolumns   (int connection_id, int type, string qualifier, string owner, string table, int scope, int nullable)     ;
/*function.odbc-statistics.html*/
      int  odbc_statistics   (int connection_id, string qualifier, string owner, string table_name, int unique, int accuracy)     ;
/*function.odbc-tableprivileges.html*/
      int  odbc_tableprivileges   (int connection_id /*, string qualifier*//*, string owner*//*, string name*/)     ;
      int  odbc_tableprivileges   (int connection_id , string qualifier/*, string owner*//*, string name*/)     ;
      int  odbc_tableprivileges   (int connection_id , string qualifier, string owner/*, string name*/)     ;
      int  odbc_tableprivileges   (int connection_id , string qualifier, string owner, string name)     ;
/*function.odbc-tables.html*/
      int  odbc_tables   (int connection_id /*, string qualifier*//*, string owner*//*, string name*//*, string types*/)     ;
      int  odbc_tables   (int connection_id , string qualifier/*, string owner*//*, string name*//*, string types*/)     ;
      int  odbc_tables   (int connection_id , string qualifier, string owner/*, string name*//*, string types*/)     ;
      int  odbc_tables   (int connection_id , string qualifier, string owner, string name/*, string types*/)     ;
      int  odbc_tables   (int connection_id , string qualifier, string owner, string name, string types)     ;
/*function.opendir.html*/
      int  opendir   (string path)     ;
/*function.openlog.html*/
      int  openlog   (string ident, int option, int facility)     ;
/*function.ora-bind.html*/
      int  ora_bind   (int cursor, string PHP_variable_name, string SQL_parameter_name, int length /*, int type*/)     ;
      int  ora_bind   (int cursor, string PHP_variable_name, string SQL_parameter_name, int length , int type)     ;
/*function.ora-close.html*/
      int  ora_close   (int cursor)     ;
/*function.ora-columnname.html*/
      string  Ora_ColumnName   (int cursor, int column)     ;
/*function.ora-columntype.html*/
      string  Ora_ColumnType   (int cursor, int column)     ;
/*function.ora-commit.html*/
      int  ora_commit   (int conn)     ;
/*function.ora-commitoff.html*/
      int  ora_commitoff   (int conn)     ;
/*function.ora-commiton.html*/
      int  ora_commiton   (int conn)     ;
/*function.ora-error.html*/
      string  Ora_Error   (int cursor_or_connection)     ;
/*function.ora-errorcode.html*/
      int  Ora_ErrorCode   (int cursor_or_connection)     ;
/*function.ora-exec.html*/
      int  ora_exec   (int cursor)     ;
/*function.ora-fetch.html*/
      int  ora_fetch   (int cursor)     ;
/*function.ora-getcolumn.html*/
      mixed  ora_getcolumn   (int cursor, mixed column)     ;
/*function.ora-logoff.html*/
      int  ora_logoff   (int connection)     ;
/*function.ora-logon.html*/
      int  ora_logon   (string user, string password)     ;
/*function.ora-open.html*/
      int  ora_open   (int connection)     ;
/*function.ora-parse.html*/
      int  ora_parse   (int cursor_ind, string sql_statement, int defer)     ;
/*function.ora-rollback.html*/
      int  ora_rollback   (int connection)     ;
/*function.ord.html*/
      int  ord   (string string)     ;
/*function.pack.html*/
      string  pack   (string format /*, mixed         args ...*/)     ;
/*function.parse-str.html*/
      void  parse_str   (string str)     ;
/*function.parse-url.html*/
      array  parse_url   (string url)     ;
/*function.passthru.html*/
      void  passthru   (string command /*, int         return_var*/)     ;
      void  passthru   (string command , int         return_var)     ;
/*function.pclose.html*/
      int  pclose   (int fp)     ;
/*function.pdf-add-annotation.html*/
      void  pdf_add_annotation   (int pdf_document, double llx, double lly, double urx, double ury, string title, string content)     ;
/*function.pdf-add-outline.html*/
      int  pdf_add_outline   (int pdf_document, string text /*, int parent*//*, int open*/)     ;
      int  pdf_add_outline   (int pdf_document, string text , int parent/*, int open*/)     ;
      int  pdf_add_outline   (int pdf_document, string text , int parent, int open)     ;
/*function.pdf-arc.html*/
      void  pdf_arc   (int pdf_document, double x_coor, double y_coor, double radius, double start, double end)     ;
/*function.pdf-begin-page.html*/
      void  pdf_begin_page   (int pdf_document, double width, double height)     ;
/*function.pdf-circle.html*/
      void  pdf_circle   (int pdf_document, double x_coor, double y_coor, double radius)     ;
/*function.pdf-clip.html*/
      void  pdf_clip   (int pdf_document)     ;
/*function.pdf-close-image.html*/
      void  pdf_close_image   (int image)     ;
/*function.pdf-close.html*/
      void  pdf_close   (int pdf_document)     ;
/*function.pdf-closepath-fill-stroke.html*/
      void  pdf_closepath_fill_stroke   (int pdf_document)     ;
/*function.pdf-closepath-stroke.html*/
      void  pdf_closepath_stroke   (int pdf_document)     ;
/*function.pdf-closepath.html*/
      void  pdf_closepath   (int pdf_document)     ;
/*function.pdf-continue-text.html*/
      void  pdf_continue_text   (int pdf_document, string text)     ;
/*function.pdf-curveto.html*/
      void  pdf_curveto   (int pdf_document, double x1, double y1, double x2, double y2, double x3, double y3)     ;
/*function.pdf-end-page.html*/
      void  pdf_end_page   (int pdf_document)     ;
/*function.pdf-endpath.html*/
      void  pdf_endpath   (int pdf_document)     ;
/*function.pdf-execute-image.html*/
      void  pdf_execute_image   (int pdf_document, int image, double x_coor, double y_coor, double scale)     ;
/*function.pdf-fill-stroke.html*/
      void  pdf_fill_stroke   (int pdf_document)     ;
/*function.pdf-fill.html*/
      void  pdf_fill   (int pdf_document)     ;
/*function.pdf-get-info.html*/
//DEBUG      info  pdf_get_info   (string filename)     ;
/*function.pdf-get-parameter.html*/
      string  pdf_get_parameter   (int pdf_document, string name, double modifier)     ;
/*function.pdf-get-value.html*/
      double  pdf_get_value   (int pdf_document, string name, double modifier)     ;
/*function.pdf-lineto.html*/
      void  pdf_lineto   (int pdf_document, double x_coor, double y_coor)     ;
/*function.pdf-moveto.html*/
      void  pdf_moveto   (int pdf_document, double x_coor, double y_coor)     ;
/*function.pdf-open-gif.html*/
      int  pdf_open_gif   (int pdf_document, string filename)     ;
/*function.pdf-open-jpeg.html*/
      int  pdf_open_jpeg   (int pdf_document, string filename)     ;
/*function.pdf-open-memory-image.html*/
      int  pdf_open_memory_image   (int pdf_document, int image)     ;
/*function.pdf-open-png.html*/
      int              pdf_open_png             (int             pdf, string             png_file)     ;
/*function.pdf-open.html*/
      int  pdf_open   (int file, int info)     ;
/*function.pdf-place-image.html*/
      void  pdf_place_image   (int pdf_document, int image, double x_coor, double y_coor, double scale)     ;
/*function.pdf-put-image.html*/
      void  pdf_put_image   (int pdf_document, int image)     ;
/*function.pdf-rect.html*/
      void  pdf_rect   (int pdf_document, double x_coor, double y_coor, double width, double height)     ;
/*function.pdf-restore.html*/
      void  pdf_restore   (int pdf_document)     ;
/*function.pdf-rotate.html*/
      void  pdf_rotate   (int pdf_document, double angle)     ;
/*function.pdf-save.html*/
      void  pdf_save   (int pdf_document)     ;
/*function.pdf_scale.html*/
      void  pdf_scale   (int pdf_document, double x_scale, double y_scale)     ;
/*function.pdf-set-border-color.html*/
      void  pdf_set_border_color   (int pdf_document, double red, double green, double blue)     ;
/*function.pdf-set-border-dash.html*/
      void  pdf_set_border_dash   (int pdf_document, double black, double white)     ;
/*function.pdf-set-border-style.html*/
      void  pdf_set_border_style   (int pdf_document, string style, double width)     ;
/*function.pdf-set-char-spacing.html*/
      void  pdf_set_char_spacing   (int pdf_document, double space)     ;
/*function.pdf-set-duration.html*/
      void  pdf_set_duration   (int pdf_document, double duration)     ;
/*function.pdf-set-font.html*/
      void  pdf_set_font   (int pdf_document, string font_name, double size, string encoding /*, int embed*/)     ;
      void  pdf_set_font   (int pdf_document, string font_name, double size, string encoding , int embed)     ;
/*function.pdf-set-horiz-scaling.html*/
      void  pdf_set_horiz_scaling   (int pdf_document, double scale)     ;
/*function.pdf-set-info-author.html*/
//DEBUG    void pdf_set_info_author (info info, string author);   ;
/*function.pdf-set-info-creator.html*/
//DEBUG    void pdf_set_info_creator (info info, string creator);   ;
/*function.pdf-set-info-keywords.html*/
//DEBUG    void pdf_set_info_keywords (info info, string keywords);   ;
/*function.pdf-set-info-subject.html*/
//DEBUG    void pdf_set_info_subject (info info, string subject);   ;
/*function.pdf-set-info-title.html*/
//DEBUG    void pdf_set_info_title (info info, string title);   ;
/*function.pdf-set-info.html*/
      void  pdf_set_info   (int pdf_document, string fieldname, string value)     ;
/*function.pdf-set-leading.html*/
      void  pdf_set_leading   (int pdf_document, double distance)     ;
/*function.pdf-set-parameter.html*/
      void  pdf_set_parameter   (int pdf_document, string name, string value)     ;
/*function.pdf-set-text-matrix.html*/
      void  pdf_set_text_matrix   (int pdf_document, array matrix)     ;
/*function.pdf-set-text-pos.html*/
      void  pdf_set_text_pos   (int pdf_document, double x_coor, double y_coor)     ;
/*function.pdf-set-text-rendering.html*/
      void  pdf_set_text_rendering   (int pdf_document, int mode)     ;
/*function.pdf-set-text-rise.html*/
      void  pdf_set_text_rise   (int pdf_document, double rise)     ;
/*function.pdf-set-transition.html*/
      void  pdf_set_transition   (int pdf_document, int transition)     ;
/*function.pdf-set-value.html*/
      void  pdf_set_value   (int pdf_document, string name, double value)     ;
/*function.pdf-set-word-spacing.html*/
      void  pdf_set_word_spacing   (int pdf_document, double space)     ;
/*function.pdf-setdash.html*/
      void  pdf_setdash   (int pdf_document, double white, double black)     ;
/*function.pdf-setflat.html*/
      void  pdf_setflat   (int pdf_document, double value)     ;
/*function.pdf-setgray-fill.html*/
      void  pdf_setgray_fill   (int pdf_document, double gray_value)     ;
/*function.pdf-setgray-stroke.html*/
      void  pdf_setgray_stroke   (int pdf_document, double gray_value)     ;
/*function.pdf-setgray.html*/
      void  pdf_setgray   (int pdf_document, double gray_value)     ;
/*function.pdf-setlinecap.html*/
      void  pdf_setlinecap   (int pdf_document, int value)     ;
/*function.pdf-setlinejoin.html*/
      void  pdf_setlinejoin   (int pdf_document, long value)     ;
/*function.pdf-setlinewidth.html*/
      void  pdf_setlinewidth   (int pdf_document, double width)     ;
/*function.pdf-setmiterlimit.html*/
      void  pdf_setmiterlimit   (int pdf_document, double value)     ;
/*function.pdf-setrgbcolor-fill.html*/
      void  pdf_setrgbcolor_fill   (int pdf_document, double red_value, double green_value, double blue_value)     ;
/*function.pdf-setrgbcolor-stroke.html*/
      void  pdf_setrgbcolor_stroke   (int pdf_document, double red_value, double green_value, double blue_value)     ;
/*function.pdf-setrgbcolor.html*/
      void  pdf_setrgbcolor   (int pdf_document, double red_value, double green_value, double blue_value)     ;
/*function.pdf-show-boxed.html*/
      int  pdf_show_boxed   (int pdf_document, string text, double x_coor, double y_coor, double width, double height, string mode)     ;
/*function.pdf-show-xy.html*/
      void  pdf_show_xy   (int pdf_document, string text, double x_coor, double y_coor)     ;
/*function.pdf-show.html*/
      void  pdf_show   (int pdf_document, string text)     ;
/*function.pdf-skew.html*/
      void  pdf_skew   (int pdf_document, double alpha, double beta)     ;
/*function.pdf-stringwidth.html*/
      double  pdf_stringwidth   (int pdf_document, string text)     ;
/*function.pdf-stroke.html*/
      void  pdf_stroke   (int pdf_document)     ;
/*function.pdf-translate.html*/
      void  pdf_translate   (int pdf_document, double x_coor, double y_coor)     ;
/*function.pfpro-cleanup.html*/
      void  pfpro_cleanup  (void);     ;
/*function.pfpro-init.html*/
      void  pfpro_init  (void);     ;
/*function.pfpro-process-raw.html*/
      string  pfpro_process_raw   (string parameters /*, string        address*//*, int        port*//*, int        timeout*//*, string        proxy address*//*, int        proxy port*//*, string        proxy logon*//*, string        proxy password*/)     ;
      string  pfpro_process_raw   (string parameters , string        address/*, int        port*//*, int        timeout*//*, string        proxy address*//*, int        proxy port*//*, string        proxy logon*//*, string        proxy password*/)     ;
      string  pfpro_process_raw   (string parameters , string        address, int        port/*, int        timeout*//*, string        proxy address*//*, int        proxy port*//*, string        proxy logon*//*, string        proxy password*/)     ;
      string  pfpro_process_raw   (string parameters , string        address, int        port, int        timeout/*, string        proxy address*//*, int        proxy port*//*, string        proxy logon*//*, string        proxy password*/)     ;
      string  pfpro_process_raw   (string parameters , string        address, int        port, int        timeout, string        proxy_address/*, int        proxy port*//*, string        proxy logon*//*, string        proxy password*/)     ;
      string  pfpro_process_raw   (string parameters , string        address, int        port, int        timeout, string        proxy_address, int        proxy_port/*, string        proxy logon*//*, string        proxy password*/)     ;
      string  pfpro_process_raw   (string parameters , string        address, int        port, int        timeout, string        proxy_address, int        proxy_port, string        proxy_logon/*, string        proxy password*/)     ;
      string  pfpro_process_raw   (string parameters , string        address, int        port, int        timeout, string        proxy_address, int        proxy_port, string        proxy_logon, string        proxy_password)     ;
/*function.pfpro-process.html*/
      array  pfpro_process   (array parameters /*, string        address*//*, int        port*//*, int        timeout*//*, string        proxy_address*//*, int        proxy port*//*, string        proxy logon*//*, string        proxy password*/)     ;
      array  pfpro_process   (array parameters , string        address/*, int        port*//*, int        timeout*//*, string        proxy_address*//*, int        proxy port*//*, string        proxy logon*//*, string        proxy password*/)     ;
      array  pfpro_process   (array parameters , string        address, int        port/*, int        timeout*//*, string        proxy_address*//*, int        proxy port*//*, string        proxy logon*//*, string        proxy password*/)     ;
      array  pfpro_process   (array parameters , string        address, int        port, int        timeout/*, string        proxy_address*//*, int        proxy port*//*, string        proxy logon*//*, string        proxy password*/)     ;
      array  pfpro_process   (array parameters , string        address, int        port, int        timeout, string        proxy_address/*, int        proxy port*//*, string        proxy logon*//*, string        proxy password*/)     ;
      array  pfpro_process   (array parameters , string        address, int        port, int        timeout, string        proxy_address, int        proxy_port/*, string        proxy logon*//*, string        proxy password*/)     ;
      array  pfpro_process   (array parameters , string        address, int        port, int        timeout, string        proxy_address, int        proxy_port, string        proxy_logon/*, string        proxy password*/)     ;
      array  pfpro_process   (array parameters , string        address, int        port, int        timeout, string        proxy_address, int        proxy_port, string        proxy_logon, string        proxy_password)     ;
/*function.pfpro-version.html*/
      string  pfpro_version  (void);     ;
/*function.pfsockopen.html*/
      int  pfsockopen   (string hostname, int port /*, int         errno*//*, string         errstr*//*, int        timeout*/)     ;
      int  pfsockopen   (string hostname, int port , int         errno/*, string         errstr*//*, int        timeout*/)     ;
      int  pfsockopen   (string hostname, int port , int         errno, string         errstr/*, int        timeout*/)     ;
      int  pfsockopen   (string hostname, int port , int         errno, string         errstr, int        timeout)     ;
/*function.pg-close.html*/
      bool  pg_close   (int connection)     ;
/*function.pg-cmdtuples.html*/
      int  pg_cmdtuples   (int result_id)     ;
/*function.pg-connect.html*/
      int  pg_connect   (string host, string port, string options, string tty, string dbname)     ;
/*function.pg-dbname.html*/
      string  pg_dbname   (int connection)     ;
/*function.pg-errormessage.html*/
      string  pg_errormessage   (int connection)     ;
/*function.pg-exec.html*/
      int  pg_exec   (int connection, string query)     ;
/*function.pg-fetch-array.html*/
      array  pg_fetch_array   (int result, int row /*, int         result_type*/)     ;
      array  pg_fetch_array   (int result, int row , int         result_type)     ;
/*function.pg-fetch-object.html*/
      object  pg_fetch_object   (int result, int row /*, int         result_type*/)     ;
      object  pg_fetch_object   (int result, int row , int         result_type)     ;
/*function.pg-fetch-row.html*/
      array  pg_fetch_row   (int result, int row)     ;
/*function.pg-fieldisnull.html*/
      int  pg_fieldisnull   (int result_id, int row, mixed field)     ;
/*function.pg-fieldname.html*/
      string  pg_fieldname   (int result_id, int field_number)     ;
/*function.pg-fieldnum.html*/
      int  pg_fieldnum   (int result_id, string field_name)     ;
/*function.pg-fieldprtlen.html*/
      int  pg_fieldprtlen   (int result_id, int row_number, string field_name)     ;
/*function.pg-fieldsize.html*/
      int  pg_fieldsize   (int result_id, int field_number)     ;
/*function.pg-fieldtype.html*/
      string  pg_fieldtype   (int result_id, int field_number)     ;
/*function.pg-freeresult.html*/
      int  pg_freeresult   (int result_id)     ;
/*function.pg-getlastoid.html*/
      int  pg_getlastoid   (int result_id)     ;
/*function.pg-host.html*/
      string  pg_host   (int connection_id)     ;
/*function.pg-loclose.html*/
      void  pg_loclose   (int fd)     ;
/*function.pg-locreate.html*/
      int  pg_locreate   (int conn)     ;
/*function.pg-loexport.html*/
      bool  pg_loexport   (int        oid, int        file /*, int        connection_id*/)     ;
      bool  pg_loexport   (int        oid, int        file , int        connection_id)     ;
/*function.pg-loimport.html*/
      int  pg_loimport   (int        file /*, int        connection_id*/)     ;
      int  pg_loimport   (int        file , int        connection_id)     ;
/*function.pg-loopen.html*/
      int  pg_loopen   (int conn, int objoid, string mode)     ;
/*function.pg-loread.html*/
      string  pg_loread   (int fd, int len)     ;
/*function.pg-loreadall.html*/
      void  pg_loreadall   (int fd)     ;
/*function.pg-lounlink.html*/
      void  pg_lounlink   (int conn, int lobjid)     ;
/*function.pg-lowrite.html*/
      int  pg_lowrite   (int fd, string buf)     ;
/*function.pg-numfields.html*/
      int  pg_numfields   (int result_id)     ;
/*function.pg-numrows.html*/
      int  pg_numrows   (int result_id)     ;
/*function.pg-options.html*/
      string  pg_options   (int connection_id)     ;
/*function.pg-pconnect.html*/
      int  pg_pconnect   (string host, string port, string options, string tty, string dbname)     ;
/*function.pg-port.html*/
      int  pg_port   (int connection_id)     ;
/*function.pg-result.html*/
      mixed  pg_result   (int result_id, int row_number, mixed fieldname)     ;
/*function.pg-trace.html*/
      bool  pg_trace   (string        filename /*, string        mode*//*, int        connection*/)     ;
      bool  pg_trace   (string        filename , string        mode/*, int        connection*/)     ;
      bool  pg_trace   (string        filename , string        mode, int        connection)     ;
/*function.pg-tty.html*/
      string  pg_tty   (int connection_id)     ;
/*function.pg-untrace.html*/
      bool  pg_untrace   (/*int        connection*/)     ;
      bool  pg_untrace   (int        connection)     ;
/*function.php-logo-guid.html*/
      string  php_logo_guid   (void)     ;
/*function.php-sapi-name.html*/
      string  php_sapi_name   (void)     ;
/*function.phpcredits.html*/
      void  phpcredits   (int flag)     ;
/*function.phpinfo.html*/
      int  phpinfo   (void)     ;
/*function.phpversion.html*/
      string  phpversion   (void)     ;
/*function.pi.html*/
      double  pi   (void)     ;
/*function.popen.html*/
      int  popen   (string command, string mode)     ;
/*function.pos.html*/
      mixed  pos   (array array)     ;
/*function.posix-ctermid.html*/
      string  posix_ctermid   (void )     ;
/*function.posix-getcwd.html*/
      string  posix_getcwd   (void )     ;
/*function.posix-getegid.html*/
      int  posix_getegid   (void )     ;
/*function.posix-geteuid.html*/
      int  posix_geteuid   (void )     ;
/*function.posix-getgid.html*/
      int  posix_getgid   (void )     ;
/*function.posix-getgrgid.html*/
      array  posix_getgrgid   (int gid)     ;
/*function.posix-getgrnam.html*/
      array  posix_getgrnam   (string name)     ;
/*function.posix-getgroups.html*/
      array  posix_getgroups   (void )     ;
/*function.posix-getlogin.html*/
      string  posix_getlogin   (void )     ;
/*function.posix-getpgid.html*/
      int  posix_getpgid   (int pid)     ;
/*function.posix-getpgrp.html*/
      int  posix_getpgrp   (void )     ;
/*function.posix-getpid.html*/
      int  posix_getpid   (void )     ;
/*function.posix-getppid.html*/
      int  posix_getppid   (void )     ;
/*function.posix-getpwnam.html*/
      array  posix_getpwnam   (string username)     ;
/*function.posix-getpwuid.html*/
      array  posix_getpwuid   (int uid)     ;
/*function.posix-getrlimit.html*/
      array  posix_getrlimit   (void )     ;
/*function.posix-getsid.html*/
      int  posix_getsid   (int pid)     ;
/*function.posix-getuid.html*/
      int  posix_getuid   (void )     ;
/*function.posix-isatty.html*/
      bool  posix_isatty   (int fd)     ;
/*function.posix-kill.html*/
      bool  posix_kill   (int pid, int sig)     ;
/*function.posix-mkfifo.html*/
      bool  posix_getcwd   (string pathname, int mode)     ;
/*function.posix-setgid.html*/
      bool  posix_setgid   (int gid)     ;
/*function.posix-setpgid.html*/
      int  posix_setpgid   (int pid, int pgid)     ;
/*function.posix-setsid.html*/
      int  posix_setsid   (void )     ;
/*function.posix-setuid.html*/
      bool  posix_setuid   (int uid)     ;
/*function.posix-times.html*/
      array  posix_times   (void )     ;
/*function.posix-ttyname.html*/
      string  posix_ttyname   (int fd)     ;
/*function.posix-uname.html*/
      array  posix_uname   (void )     ;
/*function.pow.html*/
      float  pow   (float base, float exp)     ;
/*function.preg-grep.html*/
      array  preg_grep   (string pattern, array input)     ;
/*function.preg-match-all.html*/
      int  preg_match_all   (string pattern, string subject, array matches /*, int         order*/)     ;
      int  preg_match_all   (string pattern, string subject, array matches , int         order)     ;
/*function.preg-match.html*/
      int  preg_match   (string pattern, string subject /*, array         matches*/)     ;
      int  preg_match   (string pattern, string subject , array         matches)     ;
/*function.preg-quote.html*/
      string  preg_quote   (string str /*, string         delimiter*/)     ;
      string  preg_quote   (string str , string         delimiter)     ;
/*function.preg-replace.html*/
      mixed  preg_replace   (mixed pattern, mixed replacement, mixed subject /*, int         limit*/)     ;
      mixed  preg_replace   (mixed pattern, mixed replacement, mixed subject , int         limit)     ;
/*function.preg-split.html*/
      array preg_split  (string pattern, string subject /*, int         limit*//*, int         flags*/)     ;
      array preg_split  (string pattern, string subject , int         limit/*, int         flags*/)     ;
      array preg_split  (string pattern, string subject , int         limit, int         flags)     ;
/*function.prev.html*/
      mixed  prev   (array array)     ;
/*function.print-r.html*/
      void  print_r   (mixed expression)     ;
/*function.print.html*/
//       print   (string arg)     ;
/*function.printf.html*/
      int  printf   (string format,... /*, mixed         args...*/)     ;
      int  printf   (string format,string,... /*, mixed         args...*/)     ;
      int  printf   (string format,string,string,... /*, mixed         args...*/)     ;
      int  printf   (string format,string,string,string... /*, mixed         args...*/)     ;
/*function.pspell-check.html*/
      bool  pspell_check   (int dictionary_link, string word)     ;
/*function.pspell-new.html*/
      int  pspell_new   (string language /*, string         spelling*//*, string         jargon*//*, string         encoding*//*, int         mode*/)     ;
      int  pspell_new   (string language , string         spelling/*, string         jargon*//*, string         encoding*//*, int         mode*/)     ;
      int  pspell_new   (string language , string         spelling, string         jargon/*, string         encoding*//*, int         mode*/)     ;
      int  pspell_new   (string language , string         spelling, string         jargon, string         encoding/*, int         mode*/)     ;
      int  pspell_new   (string language , string         spelling, string         jargon, string         encoding, int         mode)     ;
/*function.pspell-suggest.html*/
      array  pspell_suggest   (int dictionary_link, string word)     ;
/*function.putenv.html*/
      void  putenv   (string setting)     ;
/*function.quoted-printable-decode.html*/
      string         quoted_printable_decode          (string str)     ;
/*function.quotemeta.html*/
      string  quotemeta   (string str)     ;
/*function.rad2deg.html*/
      double  rad2deg   (double number)     ;
/*function.rand.html*/
      int  rand   (/*int min *//*, int max*/)     ;
      int  rand   (int min /*, int max*/)     ;
      int  rand   (int min , int max)     ;
/*function.range.html*/
      array  range   (int low, int high)     ;
/*function.rawurldecode.html*/
      string  rawurldecode   (string str)     ;
/*function.rawurlencode.html*/
      string  rawurlencode   (string str)     ;
/*function.read-exif-data.html*/
      array  read_exif_data   (string filename)     ;
/*function.readdir.html*/
      string  readdir   (int dir_handle)     ;
/*function.readfile.html*/
      int  readfile   (string filename /*, int         use_include_path*/)     ;
      int  readfile   (string filename , int         use_include_path)     ;
/*function.readgzfile.html*/
      int  readgzfile   (string filename /*, int         use_include_path*/)     ;
      int  readgzfile   (string filename , int         use_include_path)     ;
/*function.readline-add-history.html*/
      void  readline_add_history   (string line)     ;
/*function.readline-clear-history.html*/
      bool  readline_clear_history   (void )     ;
/*function.readline-completion-function.html*/
      bool          readline_completion_function          (string line)     ;
/*function.readline-info.html*/
      mixed  readline_info   (/*string         varname *//*, string         newvalue*/)     ;
      mixed  readline_info   (string         varname /*, string         newvalue*/)     ;
      mixed  readline_info   (string         varname , string         newvalue)     ;
/*function.readline-list-history.html*/
      array  readline_list_history   (void )     ;
/*function.readline-read-history.html*/
      bool          readline_read_history          (string filename)     ;
/*function.readline-write-history.html*/
      bool          readline_write_history          (string filename)     ;
/*function.readline.html*/
      string  readline   (/*string         prompt*/)     ;
      string  readline   (string         prompt)     ;
/*function.readlink.html*/
      string  readlink   (string path)     ;
/*function.realpath.html*/
      string  realpath   (string path)     ;
/*function.recode-file.html*/
      bool  recode_file   (int input, int output)     ;
/*function.recode-string.html*/
      string  recode_string   (string request, string string)     ;
/*function.recode.html*/
      string  recode_string   (string request, string string)     ;
/*function.register-shutdown-function.html*/
      int          register_shutdown_function          (string func)     ;
/*function.rename.html*/
      int  rename   (string oldname, string newname)     ;
/*function.require-once.html*/
;
/*function.require.html*/
;
/*function.reset.html*/
      mixed  reset   (array array)     ;
/*function.rewind.html*/
      int  rewind   (int fp)     ;
/*function.rewinddir.html*/
      void  rewinddir   (int dir_handle)     ;
/*function.rmdir.html*/
      int  rmdir   (string dirname)     ;
/*function.round.html*/
      double  round   (double val /*, int        precision*/)     ;
      double  round   (double val , int        precision)     ;
/*function.rsort.html*/
      void  rsort   (array array /*, int         sort_flags*/)     ;
      void  rsort   (array array , int         sort_flags)     ;
/*function.rtrim.html*/
    string  rtrim   (string str)   ;
/*function.sem-acquire.html*/
      int  sem_acquire   (int sem_identifier)     ;
/*function.sem-get.html*/
      int  sem_get   (int key /*, int         max_acquire*//*, int         perm*/)     ;
      int  sem_get   (int key , int         max_acquire/*, int         perm*/)     ;
      int  sem_get   (int key , int         max_acquire, int         perm)     ;
/*function.sem-release.html*/
      int  sem_release   (int sem_identifier)     ;
/*function.serialize.html*/
      string  serialize   (mixed value)     ;
/*function.session-decode.html*/
      bool  session_decode   (string data)     ;
/*function.session-destroy.html*/
      bool  session_destroy  (void);     ;
/*function.session-encode.html*/
      bool  session_encode  (void);     ;
/*function.session-get-cookie-params.html*/
      array  session_get_cookie_params         (void);     ;
/*function.session-id.html*/
      string  session_id   (/*string id*/)     ;
      string  session_id   (string id)     ;
/*function.session-is-registered.html*/
      bool  session_is_registered   (string name)     ;
/*function.session-module-name.html*/
      string  session_module_name   (/*string         module*/)     ;
      string  session_module_name   (string         module)     ;
/*function.session-name.html*/
      string  session_name   (/*string         name*/)     ;
      string  session_name   (string         name)     ;
/*function.session-register.html*/
      bool  session_register   (mixed name /*, mixed        ...*/)     ;
/*function.session-save-path.html*/
      string  session_save_path   (/*string         path*/)     ;
      string  session_save_path   (string         path)     ;
/*function.session-set-cookie-params.html*/
      void  session_set_cookie_params   (int lifetime /*, string path*//*, string domain*/)     ;
      void  session_set_cookie_params   (int lifetime , string path/*, string domain*/)     ;
      void  session_set_cookie_params   (int lifetime , string path, string domain)     ;
/*function.session-start.html*/
      bool  session_start  (void);     ;
/*function.session-unregister.html*/
      bool  session_unregister   (string name)     ;
/*function.session-unset.html*/
      void  session_unset  (void);     ;
/*function.set-file-buffer.html*/
      int  set_file_buffer   (int fp, int buffer)     ;
/*function.set-magic-quotes-runtime.html*/
      long          set_magic_quotes_runtime          (int new_setting)     ;
/*function.set-socket-blocking.html*/
      int  socket_set_blocking   (int socket_descriptor, int mode)     ;
/*function.set-time-limit.html*/
      void  set_time_limit   (int seconds)     ;
/*function.setcookie.html*/
      int  setcookie   (string name /*, string         value*//*, int         expire*//*, string         path*//*, string         domain*//*, int         secure*/)     ;
      int  setcookie   (string name , string         value/*, int         expire*//*, string         path*//*, string         domain*//*, int         secure*/)     ;
      int  setcookie   (string name , string         value, int         expire/*, string         path*//*, string         domain*//*, int         secure*/)     ;
      int  setcookie   (string name , string         value, int         expire, string         path/*, string         domain*//*, int         secure*/)     ;
      int  setcookie   (string name , string         value, int         expire, string         path, string         domain/*, int         secure*/)     ;
      int  setcookie   (string name , string         value, int         expire, string         path, string         domain, int         secure)     ;
/*function.setlocale.html*/
      string  setlocale   (string category, string locale)     ;
/*function.settype.html*/
      int  settype   (string var, string type)     ;
/*function.shm-attach.html*/
      int  shm_attach   (int key /*, int        memsize*//*, int        perm*/)     ;
      int  shm_attach   (int key , int        memsize/*, int        perm*/)     ;
      int  shm_attach   (int key , int        memsize, int        perm)     ;
/*function.shm-detach.html*/
      int  shm_detach   (int shm_identifier)     ;
/*function.shm-get-var.html*/
      mixed  shm_get_var   (int id, int variable_key)     ;
/*function.shm-put-var.html*/
      int  shm_put_var   (int shm_identifier, int variable_key, mixed variable)     ;
/*function.shm-remove-var.html*/
      int  shm_remove_var   (int id, int variable_key)     ;
/*function.shm-remove.html*/
      int  shm_remove   (int shm_identifier)     ;
/*function.show-source.html*/
      void  show_source   (string filename)     ;
/*function.shuffle.html*/
      void  shuffle   (array array)     ;
/*function.similar-text.html*/
      int  similar_text   (string first, string second /*, double         percent*/)     ;
      int  similar_text   (string first, string second , double         percent)     ;
/*function.sin.html*/
      float  sin   (float arg)     ;
/*function.sizeof.html*/
//DEBUG      int  sizeof   (array array)     ;
/*function.sleep.html*/
      void  sleep   (int seconds)     ;
/*function.snmp-get-quick-print.html*/
      bool  snmp_get_quick_print   (void )     ;
/*function.snmp-set-quick-print.html*/
      void  snmp_set_quick_print   (bool quick_print)     ;
/*function.snmpget.html*/
      string  snmpget   (string hostname, string community, string object_id /*, int timeout*//*, int retries*/)     ;
      string  snmpget   (string hostname, string community, string object_id , int timeout/*, int retries*/)     ;
      string  snmpget   (string hostname, string community, string object_id , int timeout, int retries)     ;
/*function.snmpset.html*/
      bool  snmpset   (string hostname, string community, string object_id, string type, mixed value /*, int timeout*//*, int retries*/)     ;
      bool  snmpset   (string hostname, string community, string object_id, string type, mixed value , int timeout/*, int retries*/)     ;
      bool  snmpset   (string hostname, string community, string object_id, string type, mixed value , int timeout, int retries)     ;
/*function.snmpwalk.html*/
      array  snmpwalk   (string hostname, string community, string object_id /*, int timeout*//*, int retries*/)     ;
      array  snmpwalk   (string hostname, string community, string object_id , int timeout/*, int retries*/)     ;
      array  snmpwalk   (string hostname, string community, string object_id , int timeout, int retries)     ;
/*function.snmpwalkoid.html*/
      array  snmpwalkoid   (string hostname, string community, string object_id /*, int timeout*//*, int retries*/)     ;
      array  snmpwalkoid   (string hostname, string community, string object_id , int timeout/*, int retries*/)     ;
      array  snmpwalkoid   (string hostname, string community, string object_id , int timeout, int retries)     ;
/*function.solid-close.html*/
;
/*function.solid-connect.html*/
;
/*function.solid-exec.html*/
;
/*function.solid-fetchrow.html*/
;
/*function.solid-fieldname.html*/
;
/*function.solid-fieldnum.html*/
;
/*function.solid-freeresult.html*/
;
/*function.solid-numfields.html*/
;
/*function.solid-numrows.html*/
;
/*function.solid-result.html*/
;
/*function.sort.html*/
      void  sort   (array array /*, int sort_flags*/)     ;
      void  sort   (array array , int sort_flags)     ;
/*function.soundex.html*/
      string  soundex   (string str)     ;
/*function.split.html*/
      array  split   (string pattern, string string /*, int         limit*/)     ;
      array  split   (string pattern, string string , int         limit)     ;
/*function.spliti.html*/
      array  split   (string pattern, string string /*, int         limit*/)     ;
      array  split   (string pattern, string string , int         limit)     ;
/*function.sprintf.html*/
      string  sprintf   (string format,... /*, mixed         args...*/)     ;
      string  sprintf   (string format,string,... /*, mixed         args...*/)     ;
      string  sprintf   (string format,string,string,... /*, mixed         args...*/)     ;
      string  sprintf   (string format,string,string,string,... /*, mixed         args...*/)     ;
/*function.sql-regcase.html*/
      string  sql_regcase   (string string)     ;
/*function.sqrt.html*/
      float  sqrt   (float arg)     ;
/*function.srand.html*/
      void  srand   (int seed)     ;
/*function.sscanf.html*/
      mixed  sscanf   (string str, string format /*, string         var1...*/)     ;
/*function.stat.html*/
      array  stat   (string filename)     ;
/*function.str-pad.html*/
      string  str_pad   (string input, int pad_length /*, string        pad_string*//*, int        pad_type*/)     ;
      string  str_pad   (string input, int pad_length , string        pad_string/*, int        pad_type*/)     ;
      string  str_pad   (string input, int pad_length , string        pad_string, int        pad_type)     ;
/*function.str-repeat.html*/
      string  str_repeat   (string input, int multiplier)     ;
/*function.str-replace.html*/
      string  str_replace   (string needle, string str, string haystack)     ;
/*function.strcasecmp.html*/
      int  strcasecmp   (string str1, string str2)     ;
/*function.strchr.html*/
      string  strchr   (string haystack, string needle)     ;
/*function.strcmp.html*/
      int  strcmp   (string str1, string str2)     ;
/*function.strcspn.html*/
      int  strcspn   (string str1, string str2)     ;
/*function.strftime.html*/
      string  strftime   (string format /*, int         timestamp*/)     ;
      string  strftime   (string format , int         timestamp)     ;
/*function.strip-tags.html*/
      string  strip_tags   (string str /*, string         allowable_tags*/)     ;
      string  strip_tags   (string str , string         allowable_tags)     ;
/*function.stripcslashes.html*/
      string  stripcslashes   (string str)     ;
/*function.stripslashes.html*/
      string  stripslashes   (string str)     ;
/*function.stristr.html*/
      string  stristr   (string haystack, string needle)     ;
/*function.strlen.html*/
      int  strlen   (string str)     ;
/*function.strnatcasecmp.html*/
      int  strnatcasecmp   (string str1, string str2)     ;
/*function.strnatcmp.html*/
      int  strnatcmp   (string str1, string str2)     ;
/*function.strncmp.html*/
      int  strncmp   (string str1, string str2, int len)     ;
/*function.strpos.html*/
      int  strpos   (string haystack, string needle /*, int         offset*/)     ;
      int  strpos   (string haystack, string needle , int         offset)     ;
/*function.strrchr.html*/
      string  strrchr   (string haystack, string needle)     ;
/*function.strrev.html*/
      string  strrev   (string string)     ;
/*function.strrpos.html*/
      int  strrpos   (string haystack, char needle)     ;
/*function.strspn.html*/
      int  strspn   (string str1, string str2)     ;
/*function.strstr.html*/
      string  strstr   (string haystack, string needle)     ;
/*function.strtok.html*/
      string  strtok   (string arg1, string arg2)     ;
/*function.strtolower.html*/
      string  strtolower   (string str)     ;
/*function.strtotime.html*/
      int  strtotime   (string time /*, int         now*/)     ;
      int  strtotime   (string time , int         now)     ;
/*function.strtoupper.html*/
      string  strtoupper   (string string)     ;
/*function.strtr.html*/
      string  strtr   (string str, string from, string to)     ;
/*function.strval.html*/
      string  strval   (mixed var)     ;
      string  strval   (int var)     ;
      string  strval   (string var)     ;
/*function.substr-count.html*/
      int  substr_count   (string haystrack, string needle)     ;
/*function.substr-replace.html*/
      string  substr_replace   (string source, string replacement, int start /*, int         length*/)     ;
      string  substr_replace   (string source, string replacement, int start , int         length)     ;
/*function.substr.html*/
      string  substr   (string string, int start /*, int         length*/)     ;
      string  substr   (string string, int start , int         length)     ;
/*function.swf-actiongeturl.html*/
      void         swf_actiongeturl          (string         url, string        target)     ;
/*function.swf-actiongotoframe.html*/
      void         swf_actiongotoframe          (int         framenumber)     ;
/*function.swf-actiongotolabel.html*/
      void         swf_actiongotolabel          (string         label)     ;
/*function.swf-actionnextframe.html*/
      void         swf_actionnextframe         (void);     ;
/*function.swf-actionplay.html*/
      void         swf_actionplay         (void);     ;
/*function.swf-actionprevframe.html*/
      void         swf_actionprevframe         (void);     ;
/*function.swf-actionsettarget.html*/
      void          swf_actionsettarget          (string        target)     ;
/*function.swf-actionstop.html*/
      void         swf_actionstop         (void);     ;
/*function.swf-actiontogglequality.html*/
      void         swf_actiontogglequality         (void);     ;
/*function.swf-actionwaitforframe.html*/
      void         swf_actionwaitforframe          (int        framenumber, int        skipcount)     ;
/*function.swf-addbuttonrecord.html*/
      void          swf_addbuttonrecord          (int         states, int         shapeid, int         depth)     ;
/*function.swf-addcolor.html*/
      void         swf_addcolor          (float         r, float         g, float         b, float         a)     ;
/*function.swf-closefile.html*/
      void          swf_closefile         (void);     ;
/*function.swf-definebitmap.html*/
      void          swf_definebitmap          (int         objid, string         image_name)     ;
/*function.swf-definefont.html*/
      void         swf_definefont          (int         fontid, string         fontname)     ;
/*function.swf-defineline.html*/
      void         swf_defineline          (int        objid, float        x1, float        y1, float         x2, float         y2, float         width)     ;
/*function.swf-definepoly.html*/
      void         swf_definepoly          (int        objid, array        coords, int        npoints, float         width)     ;
/*function.swf-definerect.html*/
      void         swf_definerect          (int        objid, float         x1, float        y1, float        x2, float         y2, float         width)     ;
/*function.swf-definetext.html*/
      void          swf_definetext          (int         objid, string         str, int         docenter)     ;
/*function.swf-endbutton.html*/
      void          swf_endbutton         (void);     ;
/*function.swf-enddoaction.html*/
      void         swf_enddoaction         (void);     ;
/*function.swf-endshape.html*/
      void         swf_endshape         (void);     ;
/*function.swf-endsymbol.html*/
      void          swf_endsymbol         (void);     ;
/*function.swf-fontsize.html*/
      void          swf_fontsize          (float         size)     ;
/*function.swf-fontslant.html*/
      void          swf_fontslant          (float         slant)     ;
/*function.swf-fonttracking.html*/
      void          swf_fonttracking          (float         tracking)     ;
/*function.swf-getbitmapinfo.html*/
      array          swf_getbitmapinfo          (int         bitmapid)     ;
/*function.swf-getfontinfo.html*/
      array          swf_getfontinfo         (void);     ;
/*function.swf-getframe.html*/
      int         swf_getframe         (void);     ;
/*function.swf-labelframe.html*/
      void         swf_labelframe          (string        name)     ;
/*function.swf-lookat.html*/
      void         swf_lookat          (double         view_x, double         view_y, double         view_z, double         reference_x, double         reference_y, double         reference_z, double         twist)     ;
/*function.swf-modifyobject.html*/
      void         swf_modifyobject          (int        depth, int        how)     ;
/*function.swf-mulcolor.html*/
      void         swf_mulcolor          (float         r, float         g, float         b, float         a)     ;
/*function.swf-nextid.html*/
      int         swf_nextid         (void);     ;
/*function.swf-oncondition.html*/
      void          swf_oncondition          (int        transition)     ;
/*function.swf-openfile.html*/
      void          swf_openfile          (string        filename, float        width, float        height, float         framerate, float        r, float         g, float         b)     ;
/*function.swf-ortho.html*/
      void          swf_ortho          (double         xmin, double         xmax, double         ymin, double         ymax, double         zmin, double         zmax)     ;
/*function.swf-ortho2.html*/
      void          swf_ortho2          (double         xmin, double         xmax, double         ymin, double         ymax)     ;
/*function.swf-perspective.html*/
      void          swf_perspective          (double         fovy, double         aspect, double         nearplane, double         farplane)     ;
/*function.swf-placeobject.html*/
      void         swf_placeobject          (int         objid, int         depth)     ;
/*function.swf-polarview.html*/
      void          swf_polarview          (double         dist, double         azimuth, double         incidence, double         twist)     ;
/*function.swf-popmatrix.html*/
      void          swf_popmatrix         (void);     ;
/*function.swf-posround.html*/
      void          swf_posround          (int         round)     ;
/*function.swf-pushmatrix.html*/
      void          swf_pushmatrix         (void);     ;
/*function.swf-removeobject.html*/
      void         swf_removeobject          (int        depth)     ;
/*function.swf-rotate.html*/
      void          swf_rotate          (double         angle, string         axis)     ;
/*function.swf_scale.html*/
      void          swf_scale          (double         x, double         y, double         z)     ;
/*function.swf-setfont.html*/
      void          swf_setfont          (int         fontid)     ;
/*function.swf-setframe.html*/
      void          swf_setframe          (int        framenumber)     ;
/*function.swf-shapearc.html*/
      void          swf_shapearc          (float         x, float         y, float         r, float         ang1, float         ang2)     ;
/*function.swf-shapecurveto.html*/
      void          swf_shapecurveto          (float         x1, float         y1, float         x2, float         y2)     ;
/*function.swf-shapecurveto3.html*/
      void         swf_shapecurveto3          (float         x1, float         y1, float         x2, float         y2, float         x3, float         y3)     ;
/*function.swf-shapefillbitmapclip.html*/
      void          swf_shapefillbitmapclip          (int         bitmapid)     ;
/*function.swf-shapefillbitmaptile.html*/
      void          swf_shapefillbitmaptile          (int         bitmapid)     ;
/*function.swf-shapefilloff.html*/
      void         swf_shapefilloff         (void);     ;
/*function.swf-shapefillsolid.html*/
      void         swf_shapefillsolid          (float        r, float        g, float        b, float        a)     ;
/*function.swf-shapelinesold.html*/
      void         swf_shapelinesolid          (float        r, float        g, float        b, float        a, float        width)     ;
/*function.swf-shapelineto.html*/
      void         swf_shapelineto          (float         x, float         y)     ;
/*function.swf-shapemoveto.html*/
      void         swf_shapemoveto          (float         x, float         y)     ;
/*function.swf-showframe.html*/
      void         swf_showframe         (void);     ;
/*function.swf-startbutton.html*/
      void          swf_startbutton          (int         objid, int         type)     ;
/*function.swf-startdoaction.html*/
      void         swf_startdoaction         (void);     ;
/*function.swf-startshape.html*/
      void         swf_startshape          (int        objid)     ;
/*function.swf-startsymbol.html*/
      void          swf_startsymbol          (int         objid)     ;
/*function.swf-textwidth.html*/
      float          swf_textwidth          (string         str)     ;
/*function.swf-translate.html*/
      void          swf_translate          (double         x, double         y, double         z)     ;
/*function.swf-viewport.html*/
      void          swf_viewport          (double         xmin, double         xmax, double         ymin, double         ymax)     ;
/*function.sybase-affected-rows.html*/
      int  sybase_affected_rows   (/*int link_identifier*/)     ;
      int  sybase_affected_rows   (int link_identifier)     ;
/*function.sybase-close.html*/
      int  sybase_close   (int link_identifier)     ;
/*function.sybase-connect.html*/
      int  sybase_connect   (string servername, string username, string password)     ;
/*function.sybase-data-seek.html*/
      int  sybase_data_seek   (int result_identifier, int row_number)     ;
/*function.sybase-fetch-array.html*/
      int  sybase_fetch_array   (int result)     ;
/*function.sybase-fetch-field.html*/
      object  sybase_fetch_field   (int result, int field_offset)     ;
/*function.sybase-fetch-object.html*/
      int  sybase_fetch_object   (int result)     ;
/*function.sybase-fetch-row.html*/
      array  sybase_fetch_row   (int result)     ;
/*function.sybase-field-seek.html*/
      int  sybase_field_seek   (int result, int field_offset)     ;
/*function.sybase-free-result.html*/
      int  sybase_free_result   (int result)     ;
/*function.sybase-num-fields.html*/
      int  sybase_num_fields   (int result)     ;
/*function.sybase-num-rows.html*/
      int  sybase_num_rows   (string result)     ;
/*function.sybase-pconnect.html*/
      int  sybase_pconnect   (string servername, string username, string password)     ;
/*function.sybase-query.html*/
      int  sybase_query   (string query, int link_identifier)     ;
/*function.sybase-result.html*/
      int  sybase_result   (int result, int row, mixed field)     ;
/*function.sybase-select-db.html*/
      int  sybase_select_db   (string database_name, int link_identifier)     ;
/*function.symlink.html*/
      int  symlink   (string target, string link)     ;
/*function.syslog.html*/
      int  syslog   (int priority, string message)     ;
/*function.system.html*/
      string  system   (string command /*, int         return_var*/)     ;
      string  system   (string command , int         return_var)     ;
/*function.tan.html*/
      float  tan   (float arg)     ;
/*function.tempnam.html*/
      string  tempnam   (string dir, string prefix)     ;
/*function.textdomain.html*/
      int  textdomain   (/*string         library*/)     ;
      int  textdomain   (string         library)     ;
/*function.time.html*/
      int  time  (void);     ;
/*function.tmpfile.html*/
//DEBUG      int  tmpfile   (void)     ;
/*function.touch.html*/
      int  touch   (string filename /*, int        	time*/)     ;
      int  touch   (string filename , int        	time)     ;
/*function.trim.html*/
      string  trim   (string str)     ;
/*function.uasort.html*/
      void  uasort   (array array, int (*)(string,string))     ;
/*function.ucfirst.html*/
      string  ucfirst   (string str)     ;
/*function.ucwords.html*/
      string  ucwords   (string str)     ;
/*function.uksort.html*/
      void  uksort   (array array, int (*)(string,string))     ;
/*function.umask.html*/
      int  umask   (int mask)     ;
/*function.uniqid.html*/
      int  uniqid   (string prefix /*, boolean         lcg*/)     ;
      int  uniqid   (string prefix , bool         lcg)     ;
/*function.unixtojd.html*/
      int  unixtojd   (/*int         timestamp*/)     ;
      int  unixtojd   (int         timestamp)     ;
/*function.unlink.html*/
      int  unlink   (string filename)     ;
/*function.unpack.html*/
      array  unpack   (string format, string data)     ;
/*function.unserialize.html*/
      mixed  unserialize   (string str)     ;
/*function.unset.html*/
//DEBUG      int  unset   (mixed var)     ;
/*function.urldecode.html*/
      string  urldecode   (string str)     ;
/*function.urlencode.html*/
      string  urlencode   (string str)     ;
/*function.usleep.html*/
      void  usleep   (int micro_seconds)     ;
/*function.usort.html*/
      void  usort   (array array, string cmp_function)     ;
/*function.utf8-decode.html*/
      string  utf8_decode   (string data)     ;
/*function.utf8-encode.html*/
      string  utf8_encode   (string data)     ;
/*function.var-dump.html*/
      void  var_dump   (mixed expression)     ;
/*function.virtual.html*/
//DEBUG      int  virtual   (string filename)     ;
/*function.vm-addalias.html*/
      int  vm_addalias   (string vdomain, string basepwd, string username, string alias)     ;
/*function.vm-adduser.html*/
      int  vm_adduser   (string vdomain, string basepwd, string newusername, string newuserpassword)     ;
/*function.vm-delalias.html*/
      int  vm_delalias   (string vdomain, string basepwd, string alias)     ;
/*function.vm-deluser.html*/
      int  vm_deluser   (string vdomain, string username)     ;
/*function.vm-passwd.html*/
      int  vm_passwd   (string vdomain, string username, string password, string newpassword)     ;
/*function.wddx-add-vars.html*/
      void wddx_add_vars   (int packet_id, mixed name_var /*, mixed         ...*/)     ;
/*function.wddx-deserialize.html*/
      mixed  wddx_deserialize   (string packet)     ;
/*function.wddx-packet-end.html*/
      string  wddx_packet_end   (int packet_id)     ;
/*function.wddx-packet-start.html*/
      int  wddx_packet_start   (/*string       comment*/)     ;
      int  wddx_packet_start   (string       comment)     ;
/*function.wddx-serialize-value.html*/
      string        wddx_serialize_value   (mixed var /*, string       comment*/)     ;
      string        wddx_serialize_value   (mixed var , string       comment)     ;
/*function.wddx-serialize-vars.html*/
      string  wddx_serialize_vars   (mixed var_name /*, mixed         ...*/)     ;
/*function.wordwrap.html*/
      string  wordwrap   (string str /*, int        width*//*, string        break*/)     ;
      string  wordwrap   (string str , int        width/*, string        break*/)     ;
      string  wordwrap   (string str , int        width, string        brk)     ;
/*function.xml-error-string.html*/
      string  xml_error_string   (int code)     ;
/*function.xml-get-current-byte-index.html*/
      int          xml_get_current_byte_index          (int parser)     ;
/*function.xml-get-current-column-number.html*/
      int          xml_get_current_column_number          (int parser)     ;
/*function.xml-get-current-line-number.html*/
      int          xml_get_current_line_number          (int parser)     ;
/*function.xml-get-error-code.html*/
      int  xml_get_error_code   (int parser)     ;
/*function.xml-parse-into-struct.html*/
      int  xml_parse_into_struct   (int parser, string data, array &values, array &index)     ;
/*function.xml-parse.html*/
      int  xml_parse   (int parser, string data /*, int         isFinal*/)     ;
      int  xml_parse   (int parser, string data , int         isFinal)     ;
/*function.xml-parser-create.html*/
      int  xml_parser_create   (/*string         encoding*/)     ;
      int  xml_parser_create   (string         encoding)     ;
/*function.xml-parser-free.html*/
      string  xml_parser_free   (int parser)     ;
/*function.xml-parser-get-option.html*/
      mixed         xml_parser_get_option          (int parser, int option)     ;
/*function.xml-parser-set-option.html*/
      int  xml_parser_set_option   (int parser, int option, mixed value)     ;
/*function.xml-set-character-data-handler.html*/
      int          xml_set_character_data_handler          (int parser, string handler);
    //handler    (int parser, string data)     ;
/*function.xml-set-default-handler.html*/
      int          xml_set_default_handler          (int parser, string handler);
     
      //handler    (int parser, string data)     ;
/*function.xml-set-element-handler.html*/
      int          xml_set_element_handler          (int parser, string         startElementHandler, string         endElementHandler)             ;
      //startElementHandler    (int parser, string name, array attribs)             
      //endElementHandler    (int parser, string name)     ;
/*function.xml-set-external-entity-ref-handler.html*/
      int          xml_set_external_entity_ref_handler          (int parser, string handler)           ;
      //int   handler    (int parser, string         openEntityNames, string base, string systemId, string publicId)     ;
/*function.xml-set-notation-decl-handler.html*/
      int          xml_set_notation_decl_handler          (int parser, string handler)             ;
      //handler    (int parser, string notationName, string base, string systemId, string publicId)     ;
/*function.xml-set-object.html*/
      void  xml_set_object   (int parser, object &object)     ;
/*function.xml-set-processing-instruction-handler.html*/
      int          xml_set_processing_instruction_handler          (int parser, string handler)             ;
    // handler    (int parser, string target, string data)     ;
/*function.xml-set-unparsed-entity-decl-handler.html*/
      int          xml_set_unparsed_entity_decl_handler          (int parser, string handler)             ;
      //handler    (int parser, string entityName, string base, string systemId, string publicId, string notationName)     ;
/*function.xmldoc.html*/
      object  xmldoc   (string str)     ;
/*function.xmldocfile.html*/
      object  xmldocfile   (string filename)     ;
/*function.xmltree.html*/
      object  xmltree   (string str)     ;
/*function.yaz-addinfo.html*/
      int  yaz_addinfo   (int id)     ;
/*function.yaz-close.html*/
      int  yaz_close   (int id)     ;
/*function.yaz-connect.html*/
      int  yaz_connect   (string zurl)     ;
/*function.yaz-errno.html*/
      int  yaz_errno   (int id)     ;
/*function.yaz-error.html*/
      int  yaz_error   (int id)     ;
/*function.yaz-hits.html*/
      int  yaz_hits   (int id)     ;
/*function.yaz-range.html*/
      int  yaz_range   (int id, int start, int number)     ;
/*function.yaz-record.html*/
      int  yaz_record   (int id, int pos, string type)     ;
/*function.yaz-search.html*/
      int  yaz_search   (int id, string type, string query)     ;
/*function.yaz-syntax.html*/
      int  yaz_syntax   (int id, string syntax)     ;
/*function.yaz-wait.html*/
      int  yaz_wait   (int id, string syntax)     ;
/*function.yp-err-string.html*/
;
/*function.yp-errno.html*/
;
/*function.yp-first.html*/
      array  yp_first   (string domain, string map)     ;
/*function.yp-get-default-domain.html*/
      int  yp_get_default_domain   (void )     ;
/*function.yp-master.html*/
      string  yp_master   (string domain, string map)     ;
/*function.yp-match.html*/
      string  yp_match   (string domain, string map, string key)     ;
/*function.yp-next.html*/
      array  yp_next   (string domain, string map, string key)     ;
/*function.yp-order.html*/
      int  yp_order   (string domain, string map)     ;
/*function.zend-logo-guid.html*/
      string  zend_logo_guid   (void)     ;
/*functions.arguments.html*/
;
/*functions.html*/
;
/*functions.old-syntax.html*/
;
/*functions.returning-values.html*/
;
/*functions.variable-functions.html*/
;
