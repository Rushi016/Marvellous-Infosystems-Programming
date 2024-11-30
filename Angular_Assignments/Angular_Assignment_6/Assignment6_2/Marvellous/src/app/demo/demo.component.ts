import { Component } from '@angular/core';
import { FormsModule } from '@angular/forms';

@Component({
  selector: 'app-demo',
  standalone: true,
  imports: [FormsModule],
  templateUrl: './demo.component.html',
  styleUrl: './demo.component.css'
})
export class DemoComponent
{
  public InstituteName : string = "Marvellous Infosystems";
  public LoginPage : string = "Login Page";
  public UserName : string = "";
  public Password : string = "";
  public Message : string = "";

  public LoginEvent()
  {
    this.Message = "Login Successfully!!!"
  }
}
