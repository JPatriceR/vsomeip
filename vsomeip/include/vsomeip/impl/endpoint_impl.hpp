//
// endpoint_impl.hpp
//
// Author: Lutz Bichler <Lutz.Bichler@bmwgroup.com>
//
// This file is part of the BMW Some/IP implementation.
//
// Copyright © 2013, 2014 Bayerische Motoren Werke AG (BMW).
// All rights reserved.
//

#ifndef VSOMEIP_IMPL_ENDPOINT_IMPL_HPP
#define VSOMEIP_IMPL_ENDPOINT_IMPL_HPP

#include <vsomeip/endpoint.hpp>

namespace vsomeip {

class endpoint_impl : virtual public endpoint {
public:
	endpoint_impl(ip_address _address, ip_port _port,
					ip_protocol _protocol, ip_version _version);
	virtual ~endpoint_impl();

private:
	ip_protocol get_protocol() const;
	ip_version get_version() const;
	ip_address get_address() const;
	ip_port get_port() const;

private:
	ip_protocol protocol_;
	ip_version version_;
	ip_address address_;
	ip_port port_;
};

} // namespace vsomeip

#endif // VSOMEIP_IMPL_ENDPOINT_IMPL_HPP
