///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 12/20/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_IITTP_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_IITTP_BASE_MAIN_HPP

#include "xos/app/console/protocol/iittp/base/main_opt.hpp"
#include "xos/base/array.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace iittp {
namespace base {

/// class maint
template 
<class TExtends = xos::app::console::protocol::iittp::base::main_optt<>, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint()
    : run_(0), request_(0), response_(0),
      
      creds_request_resource_("resource"),
      creds_request_username_("username"),
      creds_request_passphrase_("passphrase"),

      get_creds_request_resource_("\"resource\":\""),
      get_creds_request_username_("\",\"username\":\""),
      get_creds_request_passphrase_("\",\"passphrase\":\""),

      get_creds_request_begin_("{\"token\":{\"get_creds\":{"), 
      get_creds_request_end_("\"}}}"),
      
      set_creds_request_resource_("\"resource\":\""),
      set_creds_request_username_("\",\"username\":\""),
      set_creds_request_passphrase_("\",\"passphrase\":\""),

      set_creds_request_begin_("{\"token\":{\"set_creds\":{"), 
      set_creds_request_end_("\"}}}"),
      
      creds_response_error_("0"), 
      creds_response_resource_("resource"),
      creds_response_username_("username"),
      creds_response_passphrase_("passphrase"),

      get_creds_response_resource_(",\"resource\":\""),
      get_creds_response_username_("\",\"username\":\""),
      get_creds_response_passphrase_("\",\"passphrase\":\""),

      get_creds_response_begin_("{\"token\":{\"get_creds\":{\"error\":"), 
      get_creds_response_end_("\"}}}"),
      
      set_creds_response_begin_("{\"token\":{\"set_creds\":{\"error\":"), 
      set_creds_response_end_("}}}") {

        set_get_creds_request();
        set_set_creds_request();

        set_get_creds_response();
        set_set_creds_response();
        
        set_content_to_request();
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;
    typedef ::xos::byte_array byte_array_t;

    typedef typename extends::content_t content_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// request
    string_t& (derives::*request_)() const;
    virtual string_t& request() const {
        if ((request_)) {
            return (this->*request_)();
        }
        return this->get_creds_request();
    }

    /// ...set_to_get_creds_request
    virtual int set_to_get_creds_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        set_get_creds_request();
        request_ = &derives::get_creds_request;
        return err;
    }
    virtual int before_set_to_get_creds_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_to_get_creds_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_to_get_creds_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_to_get_creds_request(argc, argv, env))) {
            int err2 = 0;
            err = set_to_get_creds_request(argc, argv, env);
            if ((err2 = after_set_to_get_creds_request(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_to_set_creds_request
    virtual int set_to_set_creds_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        set_set_creds_request();
        request_ = &derives::set_creds_request;
        return err;
    }
    virtual int before_set_to_set_creds_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_to_set_creds_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_to_set_creds_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_to_set_creds_request(argc, argv, env))) {
            int err2 = 0;
            err = set_to_set_creds_request(argc, argv, env);
            if ((err2 = after_set_to_set_creds_request(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_to_custom_request
    virtual int set_to_custom_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        request_ = &derives::custom_request;
        return err;
    }
    virtual int before_set_to_custom_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_to_custom_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_to_custom_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_to_custom_request(argc, argv, env))) {
            int err2 = 0;
            err = set_to_custom_request(argc, argv, env);
            if ((err2 = after_set_to_custom_request(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// response
    string_t& (derives::*response_)() const;
    virtual string_t& response() const {
        if ((response_)) {
            return (this->*response_)();
        }
        return this->get_creds_response();
    }

    /// ...set_to_get_creds_response
    virtual int set_to_get_creds_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        set_get_creds_response();
        response_ = &derives::get_creds_response;
        return err;
    }
    virtual int before_set_to_get_creds_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_to_get_creds_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_to_get_creds_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_to_get_creds_response(argc, argv, env))) {
            int err2 = 0;
            err = set_to_get_creds_response(argc, argv, env);
            if ((err2 = after_set_to_get_creds_response(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_to_set_creds_response
    virtual int set_to_set_creds_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        set_set_creds_response();
        response_ = &derives::set_creds_response;
        return err;
    }
    virtual int before_set_to_set_creds_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_to_set_creds_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_to_set_creds_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_to_set_creds_response(argc, argv, env))) {
            int err2 = 0;
            err = set_to_set_creds_response(argc, argv, env);
            if ((err2 = after_set_to_set_creds_response(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_to_custom_response
    virtual int set_to_custom_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        response_ = &derives::custom_response;
        return err;
    }
    virtual int before_set_to_custom_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_to_custom_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_to_custom_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_set_to_custom_response(argc, argv, env))) {
            int err2 = 0;
            err = set_to_custom_response(argc, argv, env);
            if ((err2 = after_set_to_custom_response(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// set_content...
    virtual content_t& set_content_to_request() {
        this->set_content(this->request());
        return this->content();
    }
    virtual content_t& set_content_to_response() {
        this->set_content(this->response());
        return this->content();
    }

    /// creds request...
    virtual string_t& creds_request_resource() const {
        return (string_t&)creds_request_resource_;
    }
    virtual string_t& creds_request_username() const {
        return (string_t&)creds_request_username_;
    }
    virtual string_t& creds_request_passphrase() const {
        return (string_t&)creds_request_passphrase_;
    }

    /// get creds request...
    virtual string_t& get_creds_request_resource() const {
        return (string_t&)get_creds_request_resource_;
    }
    virtual string_t& get_creds_request_username() const {
        return (string_t&)get_creds_request_username_;
    }
    virtual string_t& get_creds_request_passphrase() const {
        return (string_t&)get_creds_request_passphrase_;
    }
    virtual string_t& get_creds_request_begin() const {
        return (string_t&)get_creds_request_begin_;
    }
    virtual string_t& get_creds_request_end() const {
        return (string_t&)get_creds_request_end_;
    }
    virtual string_t& set_get_creds_request() {
        string_t& get_creds_request = this->get_creds_request();

        get_creds_request.assign(this->get_creds_request_begin());

        get_creds_request.append(this->get_creds_request_resource());
        get_creds_request.append(this->creds_request_resource());

        get_creds_request.append(this->get_creds_request_username());
        get_creds_request.append(this->creds_request_username());

        get_creds_request.append(this->get_creds_request_passphrase());
        get_creds_request.append(this->creds_request_passphrase());

        get_creds_request.append(this->get_creds_request_end());
        return get_creds_request;
    }
    virtual string_t& get_creds_request() const {
        return (string_t&)get_creds_request_;
    }

    /// set creds request...
    virtual string_t& set_creds_request_resource() const {
        return (string_t&)set_creds_request_resource_;
    }
    virtual string_t& set_creds_request_username() const {
        return (string_t&)set_creds_request_username_;
    }
    virtual string_t& set_creds_request_passphrase() const {
        return (string_t&)set_creds_request_passphrase_;
    }
    virtual string_t& set_creds_request_begin() const {
        return (string_t&)set_creds_request_begin_;
    }
    virtual string_t& set_creds_request_end() const {
        return (string_t&)set_creds_request_end_;
    }
    virtual string_t& set_set_creds_request() {
        string_t& set_creds_request = this->set_creds_request();

        set_creds_request.assign(this->set_creds_request_begin());

        set_creds_request.append(this->set_creds_request_resource());
        set_creds_request.append(this->creds_request_resource());

        set_creds_request.append(this->set_creds_request_username());
        set_creds_request.append(this->creds_request_username());

        set_creds_request.append(this->set_creds_request_passphrase());
        set_creds_request.append(this->creds_request_passphrase());

        set_creds_request.append(this->set_creds_request_end());
        return set_creds_request;
    }
    virtual string_t& set_creds_request() const {
        return (string_t&)set_creds_request_;
    }

    /// creds response...
    virtual string_t& set_creds_response_error(const char_t* to) {
        string_t& creds_response_error = this->creds_response_error();
        creds_response_error.assign(to);
        return creds_response_error_;
    }
    virtual string_t& set_creds_response_error(const string_t& to) {
        string_t& creds_response_error = this->creds_response_error();
        creds_response_error.assign(to);
        return creds_response_error_;
    }
    virtual string_t& creds_response_error() const {
        return (string_t&)creds_response_error_;
    }

    /// creds response...
    virtual string_t& set_creds_response_resource(const char_t* to) {
        string_t& creds_response_resource = this->creds_response_resource();
        creds_response_resource.assign(to);
        return creds_response_resource_;
    }
    virtual string_t& set_creds_response_resource(const string_t& to) {
        string_t& creds_response_resource = this->creds_response_resource();
        creds_response_resource.assign(to);
        return creds_response_resource_;
    }
    virtual string_t& creds_response_resource() const {
        return (string_t&)creds_response_resource_;
    }

    /// creds response...
    virtual string_t& set_creds_response_username(const char_t* to) {
        string_t& creds_response_username = this->creds_response_username();
        creds_response_username.assign(to);
        return creds_response_username_;
    }
    virtual string_t& set_creds_response_username(const string_t& to) {
        string_t& creds_response_username = this->creds_response_username();
        creds_response_username.assign(to);
        return creds_response_username_;
    }
    virtual string_t& creds_response_username() const {
        return (string_t&)creds_response_username_;
    }

    /// creds response...
    virtual string_t& set_creds_response_passphrase(const char_t* to) {
        string_t& creds_response_passphrase = this->creds_response_passphrase();
        creds_response_passphrase.assign(to);
        return creds_response_passphrase_;
    }
    virtual string_t& set_creds_response_passphrase(const string_t& to) {
        string_t& creds_response_passphrase = this->creds_response_passphrase();
        creds_response_passphrase.assign(to);
        return creds_response_passphrase_;
    }
    virtual string_t& creds_response_passphrase() const {
        return (string_t&)creds_response_passphrase_;
    }

    /// get creds response...
    virtual string_t& get_creds_response_resource() const {
        return (string_t&)get_creds_response_resource_;
    }
    virtual string_t& get_creds_response_username() const {
        return (string_t&)get_creds_response_username_;
    }
    virtual string_t& get_creds_response_passphrase() const {
        return (string_t&)get_creds_response_passphrase_;
    }
    virtual string_t& get_creds_response_begin() const {
        return (string_t&)get_creds_response_begin_;
    }
    virtual string_t& get_creds_response_end() const {
        return (string_t&)get_creds_response_end_;
    }
    virtual string_t& set_get_creds_response() {
        string_t& get_creds_response = this->get_creds_response();

        get_creds_response.assign(this->get_creds_response_begin());

        get_creds_response.append(this->creds_response_error());

        get_creds_response.append(this->get_creds_response_resource());
        get_creds_response.append(this->creds_response_resource());

        get_creds_response.append(this->get_creds_response_username());
        get_creds_response.append(this->creds_response_username());

        get_creds_response.append(this->get_creds_response_passphrase());
        get_creds_response.append(this->creds_response_passphrase());

        get_creds_response.append(this->get_creds_response_end());
        return get_creds_response;
    }
    virtual string_t& get_creds_response() const {
        return (string_t&)get_creds_response_;
    }

    /// set creds response...
    virtual string_t& set_creds_response_begin() const {
        return (string_t&)set_creds_response_begin_;
    }
    virtual string_t& set_creds_response_end() const {
        return (string_t&)set_creds_response_end_;
    }
    virtual string_t& set_set_creds_response() {
        string_t& set_creds_response = this->set_creds_response();

        set_creds_response.assign(this->set_creds_response_begin());

        set_creds_response.append(this->creds_response_error());

        set_creds_response.append(this->set_creds_response_end());
        return set_creds_response;
    }
    virtual string_t& set_creds_response() const {
        return (string_t&)set_creds_response_;
    }

    /// ...custom_request
    virtual string_t& set_custom_request(const char_t* to) {
        string_t& custom_request = this->custom_request();
        custom_request.assign(to);
        return custom_request;
    }
    virtual string_t& set_custom_request(string_t& to) {
        string_t& custom_request = this->custom_request();
        custom_request.assign(to);
        return custom_request;
    }
    virtual string_t& custom_request() const {
        return (string_t&)custom_request_;
    }

    /// ...custom_response
    virtual string_t& set_custom_response(const char_t* to) {
        string_t& custom_response = this->custom_response();
        custom_response.assign(to);
        return custom_response;
    }
    virtual string_t& set_custom_response(string_t& to) {
        string_t& custom_response = this->custom_response();
        custom_response.assign(to);
        return custom_response;
    }
    virtual string_t& custom_response() const {
        return (string_t&)custom_response_;
    }

    /// cipher / plain text
    virtual string_t& cipher_text() const {
        return (string_t&)cipher_text_;
    }
    virtual string_t& plain_text() const {
        return (string_t&)plain_text_;
    }
    virtual byte_array_t& byte_array() const {
        return (byte_array_t&)byte_array_;
    }

protected:
    string_t 
        creds_request_resource_, creds_request_username_, creds_request_passphrase_, 
        get_creds_request_resource_, get_creds_request_username_, get_creds_request_passphrase_, 
        get_creds_request_begin_, get_creds_request_end_,  get_creds_request_,
        set_creds_request_resource_, set_creds_request_username_, set_creds_request_passphrase_, 
        set_creds_request_begin_, set_creds_request_end_,  set_creds_request_,

        creds_response_error_, 
        creds_response_resource_, creds_response_username_, creds_response_passphrase_, 
        get_creds_response_resource_, get_creds_response_username_, get_creds_response_passphrase_, 
        get_creds_response_begin_, get_creds_response_end_,  get_creds_response_,
        set_creds_response_begin_, set_creds_response_end_,  set_creds_response_,

        custom_request_, custom_response_, cipher_text_, plain_text_;
    byte_array_t byte_array_;
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace iittp
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_IITTP_BASE_MAIN_HPP
