package utils_package;

import java.util.HashMap;
import java.util.Map;

public class Soap_Utils  {
	
	 public static void main(String[] args) {

		    // http://services.aonaware.com/DictService/DictService.asmx?op=Define
		    // http://services.aonaware.com/DictService/DictService.asmx?wsdl
				
		   String  baseURI = "http://services.aonaware.com";
		    int port = 80;
		    String word = "hand";

		    String myEnvelope = "<soap12:Envelope xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" " +
		      "xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soap12=\"http://www.w3.org/2003/05/soap-envelope\">" +
		      "<soap12:Body>" +
		      "<Define xmlns=\"http://services.aonaware.com/webservices/\">" +
		      "<word>" + word + "</word>" +
		      "</Define>" +
		      "</soap12:Body>" +
		      "</soap12:Envelope>";
		    
		    Map<String, String> authhdrs = new HashMap<String, String>();
		    authhdrs.put("SOAPAction", "Define");
		    //authhdrs.put("Content-Length", Integer.toString( myEnvelope.length() ) );		
		    String xml = given().request().headers(authhdrs)
		      .contentType("application/soap+xml; charset=UTF-8;").body( myEnvelope )
		      .when().post( "/DictService/DictService.asmx" ).andReturn().asString();
			    
		    String prettyXML = with(xml).prettyPrint();	    
		    System.out.println( prettyXML );
		    
		    
		    
		  }



}
