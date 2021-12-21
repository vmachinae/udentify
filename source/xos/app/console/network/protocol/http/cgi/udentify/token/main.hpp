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
///   Date: 12/21/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_CGI_UDENTIFY_TOKEN_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_CGI_UDENTIFY_TOKEN_MAIN_HPP

#include "xos/app/console/network/protocol/http/cgi/udentify/token/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace protocol {
namespace http {
namespace cgi {
namespace udentify {
namespace token {

/// class maint
template 
<class TExtends = xos::app::console::network::protocol::http::cgi::udentify::token::main_optt<>, 
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
    maint(): 
    run_(0), set_content_type_from_context_(0) {
        
        this->set_content_to_response();
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

    typedef typename extends::content_type_header_t content_type_header_t;

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

    /// ...console_gateway_run
    virtual int console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        this->out(this->content());
        //err = extends::console_gateway_run(argc, argv, env);
        return err;
    }
    virtual int before_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        set_set_content_type_from_context_to_json();
        err = extends::before_console_gateway_run(argc, argv, env);
        return err;
    }
    virtual int after_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = extends::after_console_gateway_run(argc, argv, env);
        unset_set_content_type_from_context();
        return err;
    }

    /// ...content_type...
    typedef content_type_header_t* (derives::*set_content_type_from_context_t)();
    set_content_type_from_context_t set_content_type_from_context_;
    virtual content_type_header_t* set_content_type_from_context() {
        if ((set_content_type_from_context_)) {
            return (this->*set_content_type_from_context_)();
        }
        return extends::set_content_type_from_context();
    }
    virtual content_type_header_t* set_content_type_from_context_to_json() {
        return this->set_content_type_json();
    }
    virtual set_content_type_from_context_t set_set_content_type_from_context_to_json() {
        set_content_type_from_context_ = &derives::set_content_type_from_context_to_json;
        return set_content_type_from_context_;
    }
    virtual set_content_type_from_context_t unset_set_content_type_from_context() {
        set_content_type_from_context_ = 0;
        return set_content_type_from_context_;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace token
} /// namespace udentify
} /// namespace cgi
} /// namespace http
} /// namespace protocol
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_CGI_UDENTIFY_TOKEN_MAIN_HPP
