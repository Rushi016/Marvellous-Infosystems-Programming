import { NgIf } from '@angular/common';
import { Component } from '@angular/core';
import { FormsModule } from '@angular/forms';

@Component({
  selector: 'app-marvellous',
  standalone: true,
  imports: [FormsModule,NgIf],
  template: `
  <form>
    <h2>Inside Marvellous Component</h2>
    <h2>{{Name}}</h2>

    <fieldset>
      <legend><strong>{{LoginPage}}</strong></legend>
      <p>
        <label for=Username class="Color2"><strong>Username : </strong></label>
        <input type="email" id="Username" name="Username" [(ngModel)]="Username"/>
      </p>

      <p>
        <label for=Password class="Color2"><strong>Password : </strong></label>
        <input type="password" id="Password" name="Password" [(ngModel)]="Password"/>
      </p>

      <p>
       <button type="button" (click)="LoginEvent()" class="Color1"><strong>Submit</strong></button>
      </p>

      <p class="Color3" *ngIf = "Message">
        {{Message}}
      </p>

    </fieldset>
  </form>
  `,
  styles: [`
  
    .Color1 
    {
      font-size: medium;
      font-family: "Times New Roman", Times, serif;
      color: red;
    }

    .Color2
    {
      font-size: medium;
      font-family: "Times New Roman", Times, serif;
      color: blue;
    }

    .Color3
    {
      font-size: medium;
      font-family: "Times New Roman", Times, serif;
      color: green;
    }
  `]
})
export class MarvellousComponent
{
  public Name : string = "Marvellous Infosystems";
  public LoginPage : string = "Login Page";
  public Username : string = "";
  public Password : string = "";
  public Message : string = "";

  public LoginEvent()
  {
    this.Message = "Login Successfully";
  }
}
