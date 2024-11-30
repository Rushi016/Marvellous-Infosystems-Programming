import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [],
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent
{
  public Message : string = "";
  public updateMessage(event : any) : void
  {
    this.Message = event.target.value;
  }
}
