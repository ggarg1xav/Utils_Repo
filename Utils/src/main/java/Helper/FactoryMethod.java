package Helper;



import org.testng.annotations.Factory;

import com.xavient.scripts.NewTest;
import com.xavient.scripts.Test_custTestNG;

public class FactoryMethod {

	@Factory
	public Object[] factoryMethod() {
		Object[] obj = new Object[2];
		obj[0] = new Test_custTestNG();
		obj[1] = new NewTest();
		return obj;
		
		
				
	}
}
