package com.xavient.scripts;

import org.testng.annotations.Listeners;
import org.testng.annotations.Test;

import selenium_utls.ExcelLib;
import selenium_utls.ReportLog;
import selenium_utls.ReportLog.log;
import selenium_utls.baseClass;

@Listeners(Listener.ReporterListener.class)
public class Login extends baseClass {
	ReportLog  reportLog = new ReportLog(this.getClass().getSimpleName());	

	@Test
	public void LoginToApplicationTest() throws InterruptedException {
		String Username = ExcelLib.getData("Sheet1", 1, 0);

		reportLog.LOG(log.INFO, "TEST" , new Object(){}.getClass().getEnclosingMethod().getName());
		reportLog.LOG(log.INFO, "TEST12354" , new Object(){}.getClass().getEnclosingMethod().getName());
Thread.sleep(10);
		/*getBrowser("firefox", "https://www.hallwaze.com/");

		GenericLib.clickOnElement(Elements.getWebElementByXpath(Xpaths.signin), "Element got clicked");*/

		//GenericLib.impliciytlyWait(10, "10 second");

	}
	@Test
	public void LoginToApplicationTest2() {
		String Username = ExcelLib.getData("Sheet1", 1, 0);
		reportLog.LOG(log.INFO, "TEST222" , new Object(){}.getClass().getEnclosingMethod().getName());

		reportLog.LOG(log.INFO, "TEST111" , new Object(){}.getClass().getEnclosingMethod().getName());

		/*getBrowser("firefox", "https://www.hallwaze.com/");

		GenericLib.clickOnElement(Elements.getWebElementByXpath(Xpaths.signin), "Element got clicked");*/

		//GenericLib.impliciytlyWait(10, "10 second");
	}
	

}
